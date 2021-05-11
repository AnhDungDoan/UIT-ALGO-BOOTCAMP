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
ll ans;

int main()
{
    cin >> n >> m;
    ans = 1e12;
    ll c[n + 5][m + 5];
    F(i,0,n) F(j,0,m) c[i][j] = 0;
    F(i,1,n) F(j,1,m) cin >> c[i][j];
    F(i,1,n) F(j,1,m)
    {
        c[i][j] += c[i-1][j] + c[i][j-1] - c[i-1][j-1];
        if (j>=3 && i>=3) ans = min(ans, c[i][j] - c[i][j-3] - c[i-3][j] + c[i-3][j-3]);
    }

    cout << ans;
    return 0;
}
