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

int n, a[maxn];

void solve()
{
    cin >> n;
    F(i,1,n/2)
    {
        a[i*2] = i *2 -1;
        a[i*2-1] = i*2;

    }
    if (n%2==1)
    {
        a[n] = n;
        swap(a[n], a[n-1]);
    }
    F(i,1,n) cout << a[i] << " ";
    cout << '\n';
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
