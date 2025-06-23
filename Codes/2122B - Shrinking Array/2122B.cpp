#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i,a,b) for (int i = a; i < b; i++)
#define DL(L) for(auto e:L) cout << e << " "; cout << endl;

int main() {

    int t;
    cin >> t;

    int n;

    while(t--)  {
        cin >> n;
        ll a[n];
        F(i,0,n) cin >> a[i];
        int res = -1;
        F(i,0,n-1) {
            if(abs(a[i]-a[i+1])<=1) {
                res = 0;
                break;
            }
        }
        if(res!=0) {
            F(i,0,n) {
                int x=-1,y=-1;
                F(j,i+1,n) {
                    if(x==-1) {
                        if(a[j]<=a[i]) x = a[j];
                    }
                    if(y==-1) {
                        if(a[j]>=a[i]) y = a[j];
                    }
                    if(x!=-1 && y!=-1) {
                        if(res==-1) res = j-i-1;
                        else res = min(res,j-i-1);
                        break;
                    }
                }
            }
            for(int i=n-1;i>-1;i--) {
                int x=-1,y=-1;
                for(int j = i-1;j>-1;j--) {
                    if(x==-1) {
                        if(a[j]<=a[i]) x = a[j];
                    }
                    if(y==-1) {
                        if(a[j]>=a[i]) y = a[j];
                    }
                    if(x!=-1 && y!=-1) {
                        if(res==-1) res = i-j-1;
                        else res = min(res,i-j-1);
                        break;
                    }
                }
            }
        }
        cout << res << endl;
    }
    
    return 0;
}