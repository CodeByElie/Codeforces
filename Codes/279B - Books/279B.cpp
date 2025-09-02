#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i, a, b) for (ll i = a; i < b; i++)
#define DL(L)             \
    for (auto e : L)      \
        cout << e << " "; \
    cout << endl;


void solve() {
    int n, t;
    cin >> n >> t;
    int a[n+1];
    F(i,1,n+1)  { 
        cin >> a[i]; 
    }

    ll ans = 0;
    int m = 1;
    int curr = a[1];
    F(i,1,n+1) {
        if(i>1) curr-=a[i-1];
        while(curr<=t && m<n+1) {
            m++;
            curr+=a[m];
        }
        ans = max(ans,m-i);
    }
    cout << ans << endl;
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