#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i,a,b) for (int i = a; i < b; i++)
#define DL(L) for(auto e:L) cout << e << " "; cout << endl;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;

    int ans = 0;
    while(a<=b) {
        a*=3;
        b*=2;
        ans++;
    }
    cout << ans << endl;

    return 0;
}