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
int ans[maxn][maxn];

void solve()
{
    cin >> n >> m;
    int N = n;
    int M = m;
    F(i,1,n) F(j,1,m) ans[i][j] = 0;
    ans[1][1] = ans[1][m] = ans[n][m] = ans[n][1] = 1;
    n--; m--;

    if (n % 2 == 1) n--;
    if (m % 2 == 1) m--;
    int i = 1;
    for (int i = 3; i <= m; i+=2)
    {
        if (i > m) break;
        ans[1][i] = 1;
        ans[N][i] = 1;
    }

    for (int i = 1; i <= n; i+=2)
    {
        if (i > n) break;
        ans[i][1] = 1;
        ans[i][M] = 1;
    }

    F(i,1,N)
    {
        F(j,1,M) cout << ans[i][j];
        cout << '\n';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
