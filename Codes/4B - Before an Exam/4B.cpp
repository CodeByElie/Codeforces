#include <iostream>

using namespace  std;

int main() {
    int d, s;
    cin >> d >> s;
    
    pair<int,int> T[d];
    int mn,mx;
    for(int i=0;i<d;i++) {
        cin >> mn >> mx;
        if(mn<=s) {
            T[i] = {mn,mx-mn};
            s-=mn;
        }else {
            cout <<"NO" << endl;
            return 0;
        };
    }
    for(int i=0;i<d;i++) {
        if(s==0) break;
        if(s>=T[i].second){
            s-=T[i].second;
            T[i].first+=T[i].second;
        }else {
            T[i].first+=s;
            s-=s;
        }
    }

    if(s==0){
        cout << "YES" << endl;
        for(auto p:T){
            cout << p.first << " ";
        }
        cout << endl;
    }else {
        cout << "NO" << endl;
    }


    return 0;
}