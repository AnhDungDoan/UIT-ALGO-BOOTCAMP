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

int n, m, q;

int main()
{
    freopen("input2.txt", "r", stdin);
    freopen("outrau.txt", "w", stdout);
    cin >> n >> m >> q;
    char a[n+10][m+10];
    F(i,1,n) F(j,1,m) cin >> a[i][j];

    F(o,1,q)
    {
        if (o==78)
            o =78;
        string s;
        cin >> s;
        bool flag = false;
        F(i,1,n)
            F(j,1,m)
                if (a[i][j] == s[0])
                {
                    int c = 0;
                    for (int k = 0; k < s.size(); k++)
                        if (a[i][j+k] == s[k]) c++;
                    if (c == s.size())
                    {
                        if (o == 78) o == 78;
                        flag = true;
                        break;
                    }

                    c = 0;
                    for (int k = 0; k < s.size(); k++)
                        if (a[i+k][j] == s[k]) c++;
                    if (c == s.size())
                    {
                        if (o == 78) o == 78;
                        flag = true;
                        break;
                    }
                }
        if (flag) cout << "1"; else cout << "0";
    }

    return 0;
}
