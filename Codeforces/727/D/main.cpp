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

struct pro
{
    ll a, b;
};

pro x[maxn];
ll s = 0;

bool cmp(pro i, pro j)
{
    return ((i.b < j.b) || (i.b == j.b && i.a < j.a));
}

bool cmp1(pro i, pro j)
{
    return ((i.b > j.b) || (i.b == j.a && i.a < j.a));
}
int main()
{
    freopen("a.txt", "r", stdin);
    cin >> n;
    F(i,1,n)
    {
        cin >> x[i].a >> x[i].b;
        s+=x[i].a;
    }
    sort(x+1, x+1+n, cmp);

    int i = 1, j = n;
    ll sl = 0;
    ll tdm = 0;

    while (x[j].b >= s)
    {
        sl += x[j].a;
        tdm += 2*x[j].a;
        j--;
    }

    n = j;
    //sort(x+1, x+1+n, cmp1);
    j = n;
    while (j >= i)
    {
        while (sl >= x[i].b)
        {
            tdm += x[i].a;
            sl += x[i].a;
            i++;
        }
        if (i > j) break;

        while (x[j].a - (x[i].b-sl) >= 1)
        {
            tdm += (x[i].b-sl) *2;
            x[j].a -= (x[i].b-sl);
            sl += (x[i].b-sl);

            tdm += x[i].a;
            sl+=x[i].a;
            i++;
            if (i > j) break;
        }
        if (i > j) break;
        sl += x[j].a;
        tdm += x[j].a*2;
        j--;
    }

    while (j >= i)
    {

    }

    cout << tdm;

    return 0;
}
