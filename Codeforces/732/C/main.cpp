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

const int maxn = 100050;

int n;
ll t[maxn + 100];
ll b[maxn], c[maxn];

struct so
{
    int v;
    ll x;
};

so a[maxn];

void up(int i)
{
    while (i > 0)
    {
        t[i]++;
        i -= (i & (-i));
    }
}

ll get(int i)
{
    ll anss = 0;
    while (i <= n)
    {
        anss += t[i];
        i += (i&(-i));
    }
    return anss;
}

bool cmp(so i, so j)
{
    return i.x < j.x;
}

void solve()
{
    F(i,1,n) t[i] = 0;
    sort(a+1, a+1+n, cmp);
    F(i,1,100000) c[i] = 0;
    ll ans = 0;

    F(i,1,n)
    {
        ll temp = get(a[i].v);
        b[i] = temp;
        b[i] += (a[i].v + temp) - i;
        c[a[i].x]+=b[i];
        //ans += a[i].v - i + temp;
        up(a[i].v);
    }

    F(i,1,100000)
    if (c[i] %2 == 1)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";// else cout << "NO\n";
}

int main()
{
    freopen("a.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        F(i,1,n)
        {
            cin >> a[i].x;
            //b[i] = a[i].x;
            a[i].v = i;
        }
        solve();
    }
    return 0;
}
