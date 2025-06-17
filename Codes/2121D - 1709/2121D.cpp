#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FR(a,b) for (int _ = a; _ < b; _++)

int main() {

    ll t;
    cin >> t;

    ll n;
    ll k;
    FR(0,t) {
        cin >> n;
        k = 0;
        ll a[n];
        ll b[n];
        FR(0,n) cin >> a[_];
        FR(0,n) cin >> b[_];

        vector<pair<ll,ll>> R;

        FR(0,n) {
            for(int i=0;i<n-_-1;i++) {
                if(a[i]>a[i+1]) {
                    R.push_back({1,i+1});
                    k = a[i];
                    a[i] = a[i+1];
                    a[i+1] = k;
                }
                if(b[i]>b[i+1]) {
                    R.push_back({2,i+1});
                    k = b[i];
                    b[i] = b[i+1];
                    b[i+1] = k;
                }
            }
        }

        for(int i=0;i<n;i++) {
            if(a[i]>b[i]) {
                R.push_back({3,i+1});
                k = a[i];
                a[i]=b[i];
                b[i]=k;
            }
        }

        cout << R.size() << endl;
        for(auto e:R) {
            cout << e.first << " " << e.second << endl;
        }



    }


    return 0;
}