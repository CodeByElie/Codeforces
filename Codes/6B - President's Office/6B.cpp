#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {

    int n,m;
    char c;
    cin >> n >> m >> c;
    char T[n][m];

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> T[i][j];
        }
    }

    int k = 0;
    set<char> s = {c};

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(T[i][j]!='.' && !s.contains(T[i][j]) && ( T[i][max(j-1,0)]==c || T[i][min(j+1,m-1)]==c || T[max(i-1,0)][j]==c || T[min(i+1,n-1)][j]==c)) {
                k++;
                s.insert(T[i][j]);
            };
        }
    }

    cout << k << endl;


    return 0;
}