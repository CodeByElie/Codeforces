#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FR(a, b) for (int i = a; i < b; i++)

int main()
{

    ll t;
    cin >> t;

    ll n, m;
    ll k, maxi;
    ll x,y;
    vector<pair<ll,ll>> v;

    FR(0, t)
    {
        cin >> n >> m;
        maxi = 0;
        v.clear();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> k;
                if (k > maxi)
                {
                    v.clear();
                    v.push_back({i,j});
                    maxi = k;
                }
                else if (k == maxi)
                {
                    v.push_back({i,j});
                }
            }
        }
        bool b1 = true;
        x = v[0].first;
        y = -1;
        FR(1,v.size()) {
            if(v[i].first!=x && y==-1) y = v[i].second;
            else if(y!=-1 && v[i].first!=x && v[i].second!=y) {
                b1=false;
                break;
            }
        }

        bool b2 = true;
        x = -1;
        y = v[0].second;
        FR(1,v.size()) {
            if(v[i].second!=y && x==-1) x = v[i].first;
            else if(x!=-1 && v[i].first!=x && v[i].second!=y) {
                b2=false;
                break;
            }
        }
        if(b1 || b2) cout << maxi-1 << endl;
        else cout << maxi << endl;
    }

    return 0;
}