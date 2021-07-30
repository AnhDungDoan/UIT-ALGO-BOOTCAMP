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

int n, s = 0, a[maxn];

int solve()
{
    ll n;
    cin>>n;
    if(n % 2 == 1)
    {
        cout<<"Bob"<<endl;
    }
    else
    {
        int c = 0;
        while (n % 2 == 0)
        {
            n/=2;
            ct++;
        }
        if(n>1)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            if(ct % 2)
            {
                cout<<"Bob"<<endl;
            }
            else
            {
                cout<<"Alice"<<endl;
            }
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
