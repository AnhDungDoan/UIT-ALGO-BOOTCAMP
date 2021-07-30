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
    cin >> n;
    if (n == 1)
    {
        cout << "a";
    }
    else
    if (n%2 == 0)
    {
        F(i,1,n/2 - 1) cout << "a";
        cout << "c";
        F(i,1,n/2) cout << "a";
    }
    else
    {
        n--;
        F(i,1,n/2 - 1) cout << "a";
        cout << "cd";
        F(i,1,n/2) cout << "a";
    }
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
