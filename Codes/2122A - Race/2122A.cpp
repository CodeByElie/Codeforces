#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i,a,b) for (int i = a; i < b; i++)
#define DL(L) for(auto e:L) cout << e << " "; cout << endl;

int main() {

    int t;
    cin >> t;

    int a,x,y;

    while(t--) {
        cin >> a >> x >> y;
        if(a<min(x,y) or a>max(x,y)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}