/*
	author: gnudnaod
	create: ..............
*/

#include <bits/stdc++.h>
#define F(i,a,b) for (int i = a; i <= b; i++)
#define _F(i,a,b) for (int i = a; i >= b; i--)
#define ll long long
#define pb push_back
#define ld long double

using namespace std;

const int maxn = 100;

long double D, a1, a2, vmax, t, ans;

int main()
{
    cin >> D >> a1 >> a2 >> vmax >> t;

    ld a= (a1+a2)/(2*a1*a2);
    ld delta = t*t+ 4*D*a;
    ld v = (-t+sqrt(delta))/(2*a);

    if (v<=vmax)
        ans= v/a1 + v/a2 + t;
    else
        ans = D/vmax + vmax/(2*a1) + vmax/(2*a2);

    cout << setprecision(12) << fixed << ans;
}
