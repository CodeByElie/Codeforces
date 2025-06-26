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
    ll n;
    while(t--) {
        cin >>n;
        F(i,2,n+1) {
            cout << i << " ";
        }
        cout << 1 << endl;
    }

    return 0;
}