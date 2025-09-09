#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, a, b) for (ll i = a; i < b; i++)
#define DL(L) \
for (auto e : L) \
cout << e << " "; \
cout << endl;

void solve() {
    int k;
    cin >> k;

    ll n = 0;
    ll j = 1;

    vector<pair<int,int>> pts;
    pts.reserve(500);
    pts.push_back({0,0});

    while(k-(j+1)*j/2>=0) {
        pts.push_back({pts.back().first+1,0});
        j++;
    }   

    n = j;
    k-= j*(j-1)/2;

    int x = 0, y = 1;
    while(k>0) {
        if(k-(y+1)*y/2>=0) {
            pts.push_back({x,y+500*x});
            n++;
            y++;
        }else {
            k-=y*(y-1)/2;
            x++;
            y = 1;
        }
    }



    cout << n << endl;
    for(auto pt:pts) {
        cout << pt.first << " " << pt.second << endl; 
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}