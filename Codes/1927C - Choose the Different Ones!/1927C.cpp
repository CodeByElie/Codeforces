#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i,a,b) for (int i = a; i < b; i++)
#define DL(L) for(auto e:L) cout << e << " "; cout << endl;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    ll n,m, k;
    bool ans;
    while(t--) {
        cin >> n >> m >> k;
        ans = true;
        ll a[n];
        ll b[m];
        bool checka[k] = {false};
        bool checkb[k] = {false};
        F(i,0,n) cin >> a[i];
        F(i,0,m) cin >> b[i];
        F(i,0,n) {
            if(a[i]<=k) {
                checka[a[i]-1] = true;
            }
        }
        F(i,0,m) {
            if(b[i]<=k) {
                checkb[b[i]-1] = true;
            }
        }
        F(i,0,k) {
            if(!(checka[i] || checkb[i])) {
                ans = false;
                break;
            }
        }
        ans = ans && (count(checka,checka+k,true)>=k/2) && (count(checkb,checkb+k,true)>=k/2);
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}