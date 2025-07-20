#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F(i, a, b) for (int i = a; i < b; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<array<ll, 3>> pts(n);
        F(i, 0, n)
        {
            cin >> pts[i][0] >> pts[i][1];
            pts[i][2] = i + 1;
        }
        
        sort(pts.begin(), pts.end(), [](auto &a, auto &b) {
            if (a[0] != b[0]) return a[0] < b[0];
            return a[1] < b[1];
        });
        
        int half = n / 2;
        vector<array<ll, 3>> L(pts.begin(), pts.begin() + half),
                             R(pts.begin() + half, pts.end());
        
        sort(L.begin(), L.end(), [](auto &a, auto &b) {
            return a[1] < b[1];
        });
        
        sort(R.begin(), R.end(), [](auto &a, auto &b) {
            return a[1] > b[1];
        });
        
        F(i, 0, half)
        {
            cout << L[i][2] << " " << R[i][2] << "\n";
        }
    }
    return 0;
}