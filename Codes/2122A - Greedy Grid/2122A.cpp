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
    int n,m;
    while(t--) {
        cin >> n >> m;
        if((n>=3 && m>=2) || (m>=3 && n>=2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}