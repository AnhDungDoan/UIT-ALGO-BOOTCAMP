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

int n, v[maxn], a[maxn], rep[maxn];
bool chk[maxn];

void solve()
{
    int ans = 0;
    cin >> n;
    F(i,1,n) cin >> a[i];

    F(i,1,n) chk[i] = false;

    int vn = 0, nrep = 0;
    F(i,1,n)
    if (!chk[a[i]]) {ans++; chk[a[i]] = true;}
    else v[++vn] = i;
    F(i,1,n)
    if (!chk[i]) rep[++nrep] = i;

    if (n-ans == 1)
    {
        F(i,1,n)
            if (a[i] == a[v[1]] && i != rep[1])
            {
                a[i] = rep[1];
                break;
            }
    }
    else
    {
        if (vn > 0)
        {
            if (v[1] == rep[1]) swap(rep[1], rep[2]);
            F(i,2,vn)
            if (v[i] == rep[i]) swap(rep[i-1], rep[i]);

            F(i,1,vn)
            a[v[i]] = rep[i];
        }
    }

    cout << ans << '\n';
    F(i,1,n) cout << a[i] << " ";
    cout << '\n';
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
