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

const int maxn = 100100;

int n, a[maxn], ans = 0;

void solve()
{
    ans = 0;
    int sl = 0;
    cin >> n;
    F(i,1,n) cin >> a[i];
    F(i,1,n)
    {
        F(x,1,200011)
        {
            if (a[i]*x > n+i) break;
            int j = a[i]*x-i;
            if (j<=0 || j <=i) continue;
            if (a[j] == x) ans++;
        }
    }

    cout << ans << '\n';
}

int main()
{
    freopen("a.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
