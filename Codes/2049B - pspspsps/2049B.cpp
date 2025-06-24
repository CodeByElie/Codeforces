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
    string s;
    bool bp, bs;
    while(t--) {
        cin >> n >> s;
        if(s[0]=='s') s[0]='.';
        if(s[n-1]=='p') s[n-1]='.';
        bp = false;
        bs = false;
        F(i,0,n) {
            if(s[i]=='p') bp = true;
            if(s[i]=='s') bs = true;
        }
        if(bp && bs) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}