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

const int maxn = 200100;

int n, h[maxn];

void solve()
{
    cin >> n;
    F(i,1,n) cin >> h[i];
    sort(h+1,h+1+n);

    int u = 1;
    int v = 2;
    F(i,2,n)
        if (h[i] - h[i-1] < h[v] - h[u])
        {
            u = i-1;
            v = i;
        }

    cout << h[u] << " ";
    F(i,v+1,n)
        cout << h[i] << " ";
    F(i,1,u-1)
        cout << h[i] << " ";
    cout << h[v] << '\n';
}

int main()
{
    //freopen("a.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
