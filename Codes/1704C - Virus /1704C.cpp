#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i, a, b) for (int i = a; i < b; i++)
#define DL(L)             \
    for (auto e : L)      \
        cout << e << " "; \
    cout << endl;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    ll n, m, ans;
    while (t--)
    {
        cin >> n >> m;
        ll a[m];
        F(i, 0, m)
        cin >> a[i];
        sort(a, a + m);
        ans = n;
        ll b[m];
        F(i, 0, m - 1)
        {
            b[i] = a[i + 1] - a[i] - 1;
        }
        b[m - 1] = n - a[m - 1] + a[0] - 1;
        sort(b, b + m);
        reverse(b, b + m);
        F(i, 0, m)
        {
            b[i] -= 4 * i;
            if (b[i] > 0)
            {
                if (b[i] == 1)
                    ans -= b[i];
                else
                    ans -= b[i] - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}