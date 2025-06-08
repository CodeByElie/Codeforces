#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> T(4);
    for(int i=0;i<4;i++) cin >> T[i];

    sort(T.begin(),T.end());

    bool trg = false;
    bool seg = false;

    int k= T[3] - T[2] - T[1];
    if(k==0) seg = true;
    if(k<0) trg = true;

    k= T[2] - T[1] - T[0];
    if(k==0) seg = true;
    if(k<0) trg = true;

    if(trg) cout << "TRIANGLE" << endl;
    else if(seg) cout << "SEGMENT" << endl;
    else cout << "IMPOSSIBLE" << endl;

    return 0;
}