#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i,a,b) for (int i = a; i < b; i++)
#define DL(L) for(auto e:L) cout << e << " "; cout << endl;

int main() {

    int t;
    cin >> t;

    int n;
    string s;

    F(_,0,t) {
        set<int> a;
    set<int> b;
        cin >> n >> s;
        F(i,0,n) {
            if(s[i]=='A') a.insert(i+1);
            else b.insert(i+1);
        }

        if (a.contains(1) && a.contains(n))
            cout << "Alice" << endl;
        else if (a.contains(n) && a.contains(n - 1)) cout << "Alice" << endl;
        else if(a.contains(1) && b.contains(n) && b.size()==1) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }

    return 0;
}