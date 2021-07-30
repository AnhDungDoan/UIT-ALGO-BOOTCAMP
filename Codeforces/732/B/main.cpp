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

const int maxn = 100;

int n, m;
int alpha[30], c[30];

void solve()
{
    F(j,1,28) alpha[j] = 0;
    cin >> n >> m;
    char s[n*2+5][m+3];
    F(i,1,n+n-1) F(j,1,m)
    {
        cin >> s[i][j];
    }

    F(j,1,m)
    {
        F(i,1,n+n-1)
        if (i <=n) alpha[int(s[i][j]) -96]++;
            else alpha[int(s[i][j]) -96]--;
        F(k,1,26)
            if (alpha[k] == 1)
            {
                cout << char(k+96);
                alpha[k] = 0;
            }
    }
    cout << '\n';
}

int main()
{
    //freopen("a.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        fflush(stdout);
    }
    return 0;
}
