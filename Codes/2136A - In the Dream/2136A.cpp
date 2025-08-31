#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i, a, b) for (ll i = a; i < b; i++)
#define DL(L)             \
    for (auto e : L)      \
        cout << e << " "; \
    cout << endl;


void solve() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    c-=a;
    d-=b;
    if(max(a,b)>2*(min(a,b)+1) || max(c,d)>2*(min(c,d)+1)) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}