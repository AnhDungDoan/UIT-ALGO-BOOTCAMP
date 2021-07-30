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

int n;
ll suma, sumb, a[maxn], b[maxn];

bool chk(ll x)
{
    ll na = x * 100;
    ll nb = 0;

    int lay = (x+n) - (x+n)/4;

    if (lay <= n)
    {

    }
    _F(i, n, n - (lay-x) +1)
    {
        if (i <= 0) break;
        na += a[i];
        //nb += b[i];
    }
    _F(i, n, max(1, n-lay+1)) nb += b[i];
    return (na >= nb);
}

void solve()
{
    F(i,1,100000) {a[i] = 0; b[i] = 0;}
    suma = sumb = 0LL;
    cin >> n;
    F(i,1,n)
    {
        cin >> a[i];
        suma += a[i];
    }
    F(i,1,n)
    {
        cin >> b[i];
        sumb += b[i];
    }

    sort(a+1, a+1+n);
    sort(b+1, b+1+n);

    ll l = 0, r = 100001;
    while (l <= r)
    {
        int m = (l+r)/2;
        if (chk(m)) r = m - 1; else l = m + 1;
    }

    cout << l << '\n';
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
