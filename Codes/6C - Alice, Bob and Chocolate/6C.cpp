#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FR(a,b) for (int i = a; i < b; i++)

int main() {
    ll n;
    cin >> n;
    ll T[n];
    FR(0,n) cin >> T[i];

    int a = 0, b = n-1;
    while(b-a>1) {
        if(T[b]>T[a]) {
            T[b]-=T[a];
            a++;
        }else if(T[a]>T[b]) {
            T[a]-=T[b];
            b--;
        }else {
            a++;
            b--;
        }
    }

    if(a==b) b++;

    cout << a+1 << " " << n-b << endl;


    return 0;
}
