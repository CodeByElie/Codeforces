#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FR(a,b) for (int i = a; i < b; i++)

int main() {

    int t;
    cin >> t;

    int n, s;

    FR(0,t) {
        cin >> n >> s;
        int X[n];
        FR(0,n) cin >> X[i];
        if(abs(X[n-1]-s)<abs(X[0]-s)) cout << abs(X[n-1]-s)+(X[n-1]-X[0]) << endl;
        else cout << abs(X[0]-s)+(X[n-1]-X[0]) << endl;
    }


    return 0;
}