/*
	author: gnudnaod
	create: ..............
*/

#include <bits/stdc++.h>
#define F(i,a,b) for (int i = a; i <= b; i++)
#define _F(i,a,b) for (int i = a; i >= b; i--)
#define ll long long
#define push_back pb

using namespace std;

const int maxn = 100;

struct trieNode
{
    trieNode* child[26];
    int cnt = 0;
    trieNode()
    {
        F(i,0,25) child[i] = NULL;
    }
};

trieNode* root = new trieNode(); // root
int n, m, q;

void addNode(char tmp[])
{
    int l = strlen(tmp);

    trieNode* p = root;
    F(i,0,l-1)
    {
        int nxt = tmp[i] - 'a';
        if (p->child[nxt] == NULL)
            p->child[nxt] = new trieNode();
        p = p->child[nxt];
    }
    p->cnt++;
}

bool findTrie(char s[])
{
    int l = strlen(s);
    trieNode* p = root;
    F(i,0,l-1)
    {
        int nxt = s[i] - 'a';
        if (p->child[nxt] == NULL) return false;
            else
                p = p->child[nxt];
    }

    return true;
}

int main()
{
    cin >> n >> m >> q;
    char a[n+10][m+10];
    F(i,1,n) F(j,1,m) cin >> a[i][j];

    // add node into trie
    F(i,1,n)
    {
        F(j,1,m)
        {
            char tmp[10];
            F(k,0,9)
                if (j+k < 10) tmp[k] = a[i][j+k]; else break;
            addNode(tmp);
        }
    }

    F(j,1,m)
    {
        F(i,1,n)
        {
            char tmp[10];
            F(k,0,9)
                if (i+k < 10) tmp[k] = a[i+k][j]; else break;
            addNode(tmp);
        }

    }
    //

    F(i,1,q)
    {
        char s[11];
        cin >> s;
        if (findTrie(s)) cout << "1"; else cout << "0";
    }
    return 0;
}
