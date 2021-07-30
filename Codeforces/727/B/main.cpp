/*
	author: gnudnaod
	create: ..............
*/

#include <bits/stdc++.h>
#define F(i,a,b) for (int i = a; i <= b; i++)
#define _F(i,a,b) for (int i = a; i >= b; i--)
#define ll long long
#define pb push_back

using namespace std;

const int maxn = 100101;

int n, q, c[maxn];
char s[maxn];

int main()
{
    cin >> n >> q;
    cin >> s +1;
    F(i,1,n)
        c[i] = s[i] - 96 + c[i-1];
    F(i,1,q)
    {
        int x,y;
        cin >> x >> y;
        cout << c[y] - c[x-1] << '\n';
    }
    return 0;
}
