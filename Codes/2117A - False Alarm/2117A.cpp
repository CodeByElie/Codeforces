#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FR(a, b) for (int _ = a; _ < b; _++)

int main()
{

    int t;
    cin >> t;

    int n, x;
    bool closed;
    int k = 0;

    FR(0, t)
    {
        cin >> n >> x;
        k = 0;
        for(int i=0;i<n;i++)
        {
            cin >> closed;
            if (closed) {
                for (int j = i; j < n; j++)
                {
                    if(j!=i) cin >> closed;
                    if(closed) {
                        k = j-i+1;
                    }
                }
                break;
            }
        }
        if(k>x) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}