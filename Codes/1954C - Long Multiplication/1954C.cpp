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
    string x, y;
    string mx, mn;
    while (t--)
    {
        cin >> x >> y;
        mx = "", mn = "";
        F(i, 0, x.size())
        {
            if (mx != "")
            {
                if (mx[i] > mn[i])
                {
                    char a = mx[i];
                    mx[i] = mn[i];
                    mn[i] = a;
                }
            }
            else if (x[i] != y[i])
            {
                if (x[i] > y[i])
                {
                    mx = x;
                    mn = y;
                }
                else
                {
                    mx = y;
                    mn = x;
                }
            }
        }
        if (mx != "")
        {
            x = mx;
            y = mn;
        }
        cout << x << endl;
        cout << y << endl;
    }

    return 0;
}