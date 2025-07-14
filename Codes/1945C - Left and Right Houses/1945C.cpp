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
    ll n, ans, a, b;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        a = 0;
        b = 0;
        ans = -1;
        F(i, 0, n)
        {
            b += s[i] == '1';
        }
        if (b >= ceil(n / 2.))
            ans = 0;
        else
            ans = -1;

        F(i, 0, n)
        {
            a += s[i] == '0';
            b -= s[i] == '1';
            if (a >= ceil((i + 1) / 2.) && b >= ceil((n - i - 1) / 2.))
            {
                if (ans == -1 || abs(n / 2. - ans) > abs(n / 2. - i - 1))
                    ans = i + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}