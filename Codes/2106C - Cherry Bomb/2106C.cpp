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

    ll n, k, target;

    while (t--)
    {
        cin >> n >> k;
        ll a[n];
        ll b[n];
        F(i, 0, n)
        cin >> a[i];
        F(i, 0, n)
        cin >> b[i];
        target = -1;
        F(i, 0, n)
        {
            if (b[i] != -1)
            {
                if (target != -1 && target != a[i] + b[i])
                {
                    target = -2;
                    break;
                }
                target = a[i] + b[i];
            }
        }
        if (target == -2)
            cout << 0 << endl;
        else if (target == -1)
        {
            ll mn = LLONG_MAX;
            ll mx = -1;
            F(i, 0, n)
            {
                if (a[i] < mn)
                    mn = a[i];
                if (a[i] > mx)
                    mx = a[i];
            }

            cout << mn + k - mx + 1 << endl;
        }
        else
        {
            F(i,0,n) {
                if(b[i]==-1 && (target-a[i]>k || target-a[i]<0)) {
                    target = -2;
                }
            }
            if(target==-2) cout << 0 << endl;
            else cout << 1 << endl;
        }
    }

    return 0;
}