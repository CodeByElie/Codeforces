#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i, a, b) for (ll i = a; i < b; i++)
#define DL(L)             \
    for (auto e : L)      \
        cout << e << " "; \
    cout << endl;


void solve() {
    int n;
    cin >> n;
    int a[2*n];
    F(i,0,2*n) cin >> a[i];

    map<int,int> cpt;
    F(i,0,2*n) {
        if(cpt.find(a[i])==cpt.end()) cpt[a[i]] = 1;
        else cpt[a[i]]++;
    }

    queue<pair<int,int>> ans;

    sort(a,a+2*n);

    F(i,0,2*n-1) {
        ans = {};
        ans.push({a[i],a[2*n-1]});
        map<int,int> curr_cpt(cpt);
        curr_cpt[a[i]]--;
        curr_cpt[a[2*n-1]]--;



        int x = a[2*n-1];
        int k = 2*n-2;
        if(i==k) k--;

        while(curr_cpt[x-a[k]]>0 && ans.size()<n ) {
            if(a[k]==x-a[k] && curr_cpt[a[k]]<2) break;
            ans.push({a[k],x-a[k]});
            curr_cpt[a[k]]--;
            curr_cpt[x-a[k]]--;
            x = a[k];
            k--;
            while(curr_cpt[a[k]]==0 && k>0) k--;
        }


        if(ans.size()==n) {
            cout << "YES" << endl;
            cout << ans.front().first+ans.front().second << endl;
            while(!ans.empty()) {
                cout << ans.front().first << " " << ans.front().second << endl;
                ans.pop();
            }
            return;
        }

    }
    cout << "NO" << endl;

    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }

    return 0;
}

