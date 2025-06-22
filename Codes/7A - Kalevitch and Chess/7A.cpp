#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i,a,b) for (int i = a; i < b; i++)
#define DL(L) for(auto e:L) cout << e << " "; cout << endl;

int main() {
    bool rows[8] = {false}, columns[8] = {false};
    string s;

    F(i,0,8) {
        cin >> s;
        F(j,0,8) {
            if(s[j]=='W'){
                columns[j] = true;
                rows[i] = true;
            }
        }
    }

    int ans = 16;
    F(i,0,8) ans-=rows[i]+columns[i];

    cout << (ans==16 ? 8 : ans) << endl;
    
    return 0;
}