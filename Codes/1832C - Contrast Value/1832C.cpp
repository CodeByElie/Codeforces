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
    ll n, ans;
    while(t--) {
        cin >> n;
        ll a[n];
        F(i,0,n) cin >> a[i];
        ans = 1;
        ll i = 0; 
        while(i<n-1) {
            if(a[i+1]==a[i]) {
                while(a[i+1]==a[i] && i<n-1) i++;
            }else if(a[i+1]>a[i]) {
                while(a[i+1]>=a[i] && i<n-1) i++;
                ans++;
            }else if(a[i+1]<a[i]) {
                while(a[i+1]<=a[i] && i<n-1) i++;
                ans++;
            }
            
        }  
        cout << ans << endl;

    }

    return 0;
}