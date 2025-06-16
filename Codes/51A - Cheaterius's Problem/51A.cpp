#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FR1(a) for (int i = 0; i < a; i++)
#define FR2(a, b) for (int i = a; i < b; i++)

int main()
{

    int n;
    cin >> n;

    set<ll> S;

    string a, b;

    FR1(n)
    {
        cin >> a >> b;

        ll k1 = a[0] - '0', k2 = a[1] - '0', k3 = b[1] - '0', k4 = b[0] - '0';

        if (!(S.contains(k1 * 1000 + k2 * 100 + k3 * 10 + k4) || S.contains(k4 * 1000 + k1 * 100 + k2 * 10 + k3) || S.contains(k3 * 1000 + k4 * 100 + k1 * 10 + k2) || S.contains(k2 * 1000 + k3 * 100 + k4 * 10 + k1)))
        {
            S.insert(k1 * 1000 + k2 * 100 + k3 * 10 + k4);
        }
        if (i < n-1)
            cin >> a;
    }


    cout << S.size() << endl;

    return 0;
}