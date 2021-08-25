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

const int maxn = 1100;

int n;
int a[maxn];

bool check()
{
    F(i,2,n)
        if (a[i] < a[i-1]) return false;

    return true;
}

void solve()
{
    cin >> n;
    F(i,1,n) cin >> a[i];
    if (check())
    {
        cout <<"0\n";
        return;
    }
    F(x,1,n)
    {
        if (x%2 == 1)
        {
            for (int i = 1; i <= n-2; i+=2)
            {
                if (a[i] > a[i+1]) swap(a[i],a[i+1]);
            }
        }
        else
        {
            for (int i = 2; i <= n-1; i+=2)
            {
                if (a[i] > a[i+1]) swap(a[i],a[i+1]);
            }
        }
        if (check())
        {
            cout << x << '\n';
            return;
        }
    }
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
