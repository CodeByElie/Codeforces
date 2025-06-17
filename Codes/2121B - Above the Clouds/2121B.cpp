#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FR(a,b) for (int i = a; i < b; i++)

int main() {

    ll t;
    cin >> t;

    ll n;
    string s;
    bool b;

    FR(0,t) {
        cin >> n;
        cin >> s;
        b=false;
        FR(1,n-1) {
            if(count(s.begin(),s.end(),s[i])>1) {
                cout << "Yes" << endl;
                b=true;
                break;
            }
        }
        if(!b) cout << "No" << endl;
    }


    return 0;
}