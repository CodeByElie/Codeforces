#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i, a, b) for (ll i = a; i < b; i++)
#define DL(L)             \
    for (auto e : L)      \
        cout << e << " "; \
    cout << endl;




void solve() {
    int n, m;
    cin >> n >> m;

    int steps = 0;
    while (m > n) {
        if (m % 2 == 0) m /= 2;
        else m += 1;
        steps++;
    }
    steps += (n - m);
    cout << steps << "\n";


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    // cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}