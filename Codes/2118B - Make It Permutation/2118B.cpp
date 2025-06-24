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

    int n;

    while(t--) {
        cin >> n;
        cout << 2*n-1 << endl;
        F(i,1,n) {
            cout << i << " " << 1 << " " << i << endl;
            cout << i << " " << i+1 << " " << n << endl;
        }
        cout << n << " 1 " << n << endl;
    }


    return 0;
}