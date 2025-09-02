#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i, a, b) for (ll i = a; i < b; i++)
#define DL(L)             \
    for (auto e : L)      \
        cout << e << " "; \
    cout << endl;


void solve() {
    int m, s;
    cin >> m >> s;
    if(s==0 && m==1) {
        cout << "0 0" << endl;
        return;
    }
    if(1>s || m*9<s) {
        cout << "-1 -1" << endl;
        return;
    }

    int curr = 1;
    int ans[100] = {0};
    
    if(s>9) {ans[0] = 9; curr = 9;}
    else {ans[0] = s; curr = s;}
    F(i,1,m) {
        if(curr+9<s) {
            ans[i] = 9;
            curr+=9;
        }else {
            ans[i] = s - curr;
            curr += s - curr;
        }
    }
    string ans1 ="";
    bool l = false;
    F(i,0,m-1) {
        if(ans[i+1] == 0 && ans[i]!=0) {
            l = true;
            ans1 = to_string(ans[i]-1) + ans1;
        }else {
            ans1 = to_string(ans[i]) + ans1;
        }
    }
    if(l) ans1 = "1" + ans1;
    else ans1 = to_string(ans[m-1]) + ans1;

    cout << ans1 << " ";
    F(i,0,m) cout << ans[i];
    cout << endl;



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    // cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}