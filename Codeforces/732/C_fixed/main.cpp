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

const int maxn = 101000;

int n, a[maxn], le[maxn], ch[maxn];

void solve()
{
    F(i,1,100000) {le[i] = 0; ch[i] = 0;}
    cin >> n;
    F(i,1,n)
    {
        cin >> a[i];
        if (i%2) le[a[i]]++; else ch[a[i]]++;
    }
    sort(a+1, a+1+n);
    F(i,1,n)
    {
        if (i%2) le[a[i]]--; else ch[a[i]]--;
        if (le[a[i]] < 0 || ch[a[i]] < 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

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
