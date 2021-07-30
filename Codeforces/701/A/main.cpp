/*
	author: gnudnaod
	create: ..............
*/

#include <bits/stdc++.h>
#include <stdio.h>
#define F(i,a,b) for (int i = a; i <= b; i++)
#define _F(i,a,b) for (int i = a; i >= b; i--)
#define ll long long
#define push_back pb

using namespace std;

const int maxn = 100;

int n, res, a, b;

int step(int a, int b)
{
    int st = 0;
    while (a != 0)
    {
        st++;
        a/=b;
    }

    return st;
}

void solve()
{
    cin >> a >> b;
    if (a < b) cout << "1\n";
    else
    if (a == b) cout << "2\n";
    else
    {

        int fres = 0, preres = 0;
        if (b < 2) {preres += (2 - b); b = 2;}
        F(i,b,a)
        {
            int x = step(a, i);
            fres = (i - b) + x;//int(pow(a, 1.0 / i));
            if (fres > res)
            {
                cout << res + preres << '\n';
                return;
            } else res = fres;
        }
        cout << res + preres << '\n';
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        res = 1e9 +7;
        solve();
    }
    return 0;
}
