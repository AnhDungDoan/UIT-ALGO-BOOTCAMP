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

ll n, a, b, st[10000000];
bool flag = false;

void de(ll n)
{
    if (n == 1)
    {
        flag = true;
        return;
    }
    if (n < 1) return;

    if (n % a == 0) de(n/a);
    ll tn = n - ((n/a) *a);
    if (tn % b == 0) de(n - tn); else return;
}

void solve()
{
    flag = false;
    cin >> n >> a >> b;
    if (a == 1)
    {
        if ((n - 1) % b == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
        return;
    }

    int top = 0;
    int bot = 1;
    st[++top] = 1;
    while (true)
    {
        st[++bot] = st[top] *a;
        if (st[bot] == n) cout << "Yes\n";
        st[++bot] = st[top] +b;
        if (st[bot] == n) cout << "Yes\n";
    }
}

int main()
{
    freopen("a.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
