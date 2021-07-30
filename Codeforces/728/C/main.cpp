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

const int maxn = 101100;

int n;
ll d[maxn], s[maxn];

void solve()
{
    ll ans = 0;
    cin >> n;
    F(i,1,n) cin >> d[i];

    sort(d+1,d+1+n);
    F(i,1,n)
    {
        s[i] = d[i];
        s[i] += s[i-1];
    }
    _F(i,n,3) ans+=((i-2)*d[i] - s[i-2]);
    cout << -ans << '\n';

    /*if (n == 2)
    {
        cout << "0\n";
        return;
    }
    else
    {
        int maxd = d[1], c = 0;
        F(i,1,n) maxd = max(maxd, d[i]);
        F(i,1,n) if (d[i] == maxd) c++;
        int maxnd = d[1];
        F(i,1,n)
        if (d[i] != maxd) maxnd = max(maxnd, d[i]);

        if (maxnd == 0) cout << "0\n"; else cout << -(maxd*c) << '\n';
    }*/
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
