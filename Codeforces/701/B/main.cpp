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

const int maxn = 100050;

int n, k, q;
ll a[maxn], b[maxn];

void solve()
{
    cin >> n >> q >> k;

    F(i,1,n) cin >> a[i];
    a[0] = 0; a[n + 1] = k + 1;
    F(i,1,n) b[i] = b[i-1] + a[i + 1] - a[i - 1] - 1;

    //cin >> q;
    F(i,1,q)
    {
        int l,r;
        cin >> l >> r;
        ll res = b[r - 1] - b[l] + (k+1 - (a[r-1] +1)) + (a[l + 1] - 1) - (r-l+1);
        cout << res << '\n';
    }
}

int main()
{
    int t;
    solve();
    return 0;
}
