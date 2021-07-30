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

int n;

void solve()
{
    int c = 0;
    cin >> n;
    F(i,1,2*n)
    {
        int x;
        cin >> x;
        if (x % 2 == 1) c++; else c--;
    }

    if (c == 0) cout << "Yes\n"; else cout << "No\n";
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
