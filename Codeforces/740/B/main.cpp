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

int n, a, b;
bool check[maxn];

void solve()
{
    int ans = 0;
    cin >> a >> b;
    n = a + b;
    F(i,0,n) check[i] = false;
    if (n % 2 == 0)
    {
        F(i,0,n/2)
        {
            int br = i + (b - (n/2 - i));

            if ((br <= n) && (br >=i) && ((b - (n/2 - i)) <=n/2)) check[br] = true;
        }
    }
    else
    {
        F(i,0,(n+1)/2)
        {
            int br1, br2;
            if (i != (n+1)/2) br1 = i + (b - (n/2 - i));
            br2 = i + (b - ((n+1)/2 - i));

            if ((i!= (n+1)/2) && ((b - (n/2 - i)) <= (n+1)/2) && (br1 >= i) && (br1 <= n)) check[br1] = true;
            if ((b - ((n+1)/2 - i)) <= (n/2) && (br2 >= i) && (br2 <= n)) check[br2] = true;
        }
    }

    F(i,0,n)
        if (check[i]) ans++;
    cout << ans << '\n';
    F(i,0,n)
        if (check[i]) cout << i << " ";
    cout << '\n';
}

int main()
{
    freopen("a.inp", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
