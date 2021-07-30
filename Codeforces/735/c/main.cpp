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

int n, m;

void solve()
{
    cin >> n >> m;
    /*if (n < m)
    {

    }
    else
    if (m < n) cout << "0\n";
    else
    {

    }*/

    F(i,0,m) cout << (n^i) << '\n';
}

int main()
{
    freopen("a.txt","r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
