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
    ll n,x;
    while(t--) {
        cin >> n >> x;
        F(i,0,x) cout << i << " ";
        F(i,x+1,n) cout << i << " ";
        if(x<n)cout << x << endl;
        else cout << endl;
    }


    return 0;
}