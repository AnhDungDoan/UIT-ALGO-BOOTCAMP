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

const int maxn = 300;

int n, s;
ll a[maxn];
ll d[1000010];

int main()
{
    cin >> n >> s;
    F(i,1,n)
    {
        cin >> a[i];
        a[i] += a[i-1];
    }
    a[n]-=a[n-1];

    F(i,0,s) d[i] = 1e9;
    d[0] = 0;

    F(i,1,n-1)
    F(x,a[i],s)
    d[x] = min(d[x], d[x-a[i]]+i+1);

    F(x,0,s-a[n-1])
        if ((s-x-a[n-1])%a[n] == 0) d[s] = min(d[s], d[x]+(s-x-a[n-1])/a[n] + n);

    if (d[s]==1e9) cout << -1; else cout << d[s]-1;
}
