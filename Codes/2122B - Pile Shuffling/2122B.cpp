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
    ll n;
    while (t--)
    {
        cin >> n;
        ll a[n], b[n], c[n], d[n];
        F(i, 0, n)
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        ll ans = 0;
        F(i, 0, n)
        {
            if (b[i] > d[i])
                ans += abs(d[i] - b[i]) + (a[i] - abs(min(c[i] - a[i], (ll)0)));
            if (a[i] > c[i])
                ans += abs(a[i] - c[i]);
        }

        cout << ans << endl;
    }

    return 0;
}