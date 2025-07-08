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


    int a[2], b[2], ans;
    while(t--) {
        cin >> a[0] >> a[1] >> b[0] >> b[1];
        ans = 0;
        F(i,0,2) {
            F(j,0,2) {
                if(a[i]>b[j] && a[(i+1)%2]>=b[(j+1)%2]) ans++;
                else if(a[i]==b[j] && a[(i+1)%2]>b[(j+1)%2]) ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}