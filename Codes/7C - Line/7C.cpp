#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i,a,b) for (int i = a; i < b; i++)
#define DL(L) for(auto e:L) cout << e << " "; cout << endl;

void extendedGCD(ll a, ll b, ll &d, ll &u, ll &v) {
    if(!b) {
        d = a;
        u = 1;
        v = 0;
    }else {
        extendedGCD(b,a%b,d,v,u);
        v -= u * (a/b);
    }
}

int main() {
    ll a,b,c,d,u,v;
    cin >> a >> b >> c;

    extendedGCD(a,b,d,u,v);

    if(c%d) cout << -1 << endl;
    else cout << u*(-c/d) << " " << v*(-c/d) << endl;
    
    return 0;
}