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

const int maxn = 5100;

int n, k;
char s[maxn], ans[maxn];
char text[maxn];

void solve()
{
    cin >> n >> k;
    cin >> s;
    F(i,0,k-1) ans[i] = 'z';

    F(i,0,n-1)
    {
        text[i] = s[i];
        F(j, i+1, k-1)
            text[j] = text[j - i - 1];

        int fl = false;
        F(j, 0, k-1)
            if (text[j] < ans[j])
            {
                fl = true;
                break;
            }
            else
            if (text[j] == ans[j]) continue;
            else
                break;

        if (fl)
        {
            F(j,0,k-1) ans[j] = text[j];
        }
    }
    F(j,0,k-1) cout << ans[j];
    cout << '\n';
}

int main()
{
    freopen("a.txt", "r",stdin);


    solve();

    return 0;
}
