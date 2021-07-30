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

const int maxn = 1100000;
const ll base = 1e9 + 7;

int c[maxn], npr = 0;
ll n, pr[100], st[100], loop[100], num[100];
int nnum = -1;
int nloop = 0;
bool chk[110];

void solve()
{
    ll ans = 0;
    int flag = -1;
    cin >> n;
    F(i,1,nloop)
        if (loop[i+1] > n)
        {
            flag  = i;
            break;
        }

    ll c = 0;
    _F(i, flag, 0)
    {
        ll tempC = n / loop[i];
        ans = (ans + ((tempC - c) * num[i]) + base*base) %base;
        c = c + (tempC - c);
    }
    cout << ans << '\n';
}

ll ana(int x)
{
    int uoc = 1;
    F(i,1,npr)
    {
        if (x % pr[i] == 0)
        {
            uoc = pr[i];
            break;
        }
    }

    while (x % uoc == 0)
        x /= uoc;

    if (x == 1) return uoc; else return 1;
}

void pre()
{
    F(i,0,100) chk[i] = false;
    F(i,2,100)
    {
        bool flag = false;
        F(j,2,i-1)
            if (i % j == 0) {flag = true; break;}
        if (!flag)
        {
            pr[++npr] = i;
            chk[i] = true;
        }
    }

    ll tich = 1;
    loop[0] = 1;

    F(i, 2, 50)
    {
        if (tich > 1e16) break;
        if (chk[i])
        {
            //st[i] = tich;
            tich = tich * (ll)i;
            num[++nnum] = i;
            loop[++nloop] = tich;
        }
        else
        {
            ll x= ana(i);
            if (x != 1)
            {
                //st[i] = tich;
                tich = tich * x;
                num[++nnum] = i;
                loop[++nloop] = tich;
            }
        }

    }
    //cout << tich;
}

void che()
{
    F(i,1,100000)
    {
        F(j,1,100010)
        if (i % j != 0)
        {
            c[i] = j;
            break;
        }
    }

    int m = 0;
    F(i,1,100000)
        m += c[i];

    cout << m << '\n';
}

int main()
{
    freopen("a.txt", "r", stdin);
    pre();
    //che();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
