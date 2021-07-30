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

ll n, x, t;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        cin >> n >> x >> t;
        ll c = (n-1)*x - t + (x-1);
        if (c <= 0 )
        {
            cout << n*(n-1)/2 << '\n';
            continue;
        }
        c = c/x;
        c++;


        cout << c*(t/x) + (n-c)*(n-c-1)/2 << '\n';
    }
    return 0;
}
