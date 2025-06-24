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

    ll n, k, ans;
    while (t--)
    {
        cin >> n;
        ll a[n];
        F(i, 0, n)
        cin >> a[i];
        k = a[0];
        ans = 1;
        int i = 1;
        while (i < n)
        {
            while (a[i] <= k + 1 && i < n)
                i++;
            if (i != n)
            {
                k = a[i];
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}