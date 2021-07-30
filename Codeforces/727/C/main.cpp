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

const int maxn = 200;

int n;
ll x, k, a[maxn], b[maxn];

int main()
{
    cin >> n >> k >> x;
    F(i,1,n) cin >> a[i];
    sort(a+1,a+1+n);
    F(i,2,n)
    if (a[i] == a[i-1]) b[i-1] = 0; else b[i-1] = (a[i] - a[i-1] -1) /x;
    sort(b+1, b+n);

    F(i,1,n-1)
        if (k - b[i] < 0LL)
        {
            cout << n - i + 1;
            return 0;
        }
        else k-=b[i];

    cout << 1;
    return 0;
}
