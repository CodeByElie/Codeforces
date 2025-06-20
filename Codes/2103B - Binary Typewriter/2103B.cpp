#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i,a,b) for (int i = a; i < b; i++)
#define DL(L) for(auto e:L) cout << e << " "; cout << endl;

int cost(string s) {
    bool zero = true;
    int c = 0;
    F(i,0,s.size()) {
        if(s[i]=='0'){
            if(zero) c++;
            else c+=2;
            zero = true;
        }
        if(s[i]=='1') {
            if(zero) c+=2;
            else c++;
            zero = false;
        }
    }
    return c;
}

int main() {

    ll t;
    cin >> t;

    ll n;
    string s;

    bool zero;
    ll c;
    ll k;

    F(i,0,t){
        cin >> n >> s;
        c = cost(s);
        k=-1;
        F(j,0,n) {
            if(s[j]=='1') {
                k = j;
                break;
            }
        }
        zero = false;
        F(j,k+1,n) {
            if(s[j]=='0') zero = true;
            if(s[j]=='1' && zero) {
                c-=2;
                zero = false;
                break;
            }
        }
        if(k!=-1 && zero) c-=1;
        cout << c << endl;
    }
    
    return 0;
}