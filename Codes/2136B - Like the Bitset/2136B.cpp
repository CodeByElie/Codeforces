#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i, a, b) for (ll i = a; i < b; i++)
#define DL(L)             \
    for (auto e : L)      \
        cout << e << " "; \
    cout << endl;


void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int c = 0;
    F(i,0,n) {
        if(s[i]=='1') c++;
        else c = 0;
        if(c>=k) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    int a = 1, b = n;
    F(i,0,n) {
        if(s[i]=='1') {
            cout << a << " ";
            a++;
        }else {
            cout << b << " ";
            b--;
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}