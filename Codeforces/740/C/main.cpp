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

struct cave
{
    ll val, incr;
};

int n, k;
cave hang[maxn];

bool cmp(cave i, cave j)
{
    return ((i.val < j.val) || (i.val == j.val && i.incr > j.incr));
}

void solve()
{
    cin >> n;
    F(i,1,n)
    {
        cin >> k;
        F(j,1,k)
        {
            int x;
            cin >> x;
            hang[i].val = max(hang[i].val, (ll)(x - j + 2));
        }
        hang[i].incr = k;
    }

    sort(hang+1, hang+1+n, cmp);

    ll knight = hang[1].val, ans = hang[1].val;
    F(i,2,n)
    {
        knight += hang[i-1].incr;
        if (knight < hang[i].val)
        {
            ans += hang[i].val - knight;
            knight = hang[i].val;
        }
    }

    cout << ans << '\n';
    F(i,1,n)
    {
        hang[i].val = 0; hang[i].incr = 0;
    }
}

int main()
{
    freopen("a.inp", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
