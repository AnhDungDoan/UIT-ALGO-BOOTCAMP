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

const int maxn = 1000;

int n, a[maxn], b[maxn], suma, sumb, ans, p[maxn], q[maxn];

void solve()
{
    if (suma != sumb)
    {
        cout << "-1\n";
        return;
    }

    F(i,1,n)
    while (a[i] < b[i])
    {
        F(j,1,n)
        if (i!=j && a[j] > b[j])
        {
            if (b[i] - a[i] > a[j] - b[j])
            {
                F(k,1,a[j] - b[j])
                {
                    p[++ans] = j;
                    q[ans] = i;
                }
                a[i] += a[j] - b[j];
                a[j] = b[j];
            }
            else
            {
                F(k,1,b[i]-a[i])
                {
                    p[++ans] = j;
                    q[ans] = i;
                }
                a[j] -= b[i] - a[i];
                a[i] = b[i];
            }
            break;
        }
    }

    cout << ans << '\n';
    F(i,1,ans)
    {
        cout << p[i] << " " << q[i] << '\n';
    }
}

int main()
{
    freopen("a.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        ans = 0;
        suma = 0;
        sumb = 0;
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
        solve();
    }
    return 0;
}
