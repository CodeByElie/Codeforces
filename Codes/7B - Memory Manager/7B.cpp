#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i,a,b) for (int i = a; i < b; i++)
#define DL(L) for(auto e:L) cout << e << " "; cout << endl;

int main() {

    int t,m;

    cin >> t >> m;

    vector<int> memory(m,0);
    string action;
    int n,x;
    int id = 1;

    F(i,0,t) {
        cin >> action;
        if(action=="alloc") {
            cin >> n;
            int start = -1, count = 0;
            F(j,0,m) {
                if (memory[j] == 0) {
                    if (count == 0) start = j;
                    count++;
                    if (count == n) break;
                } else {
                    count = 0;
                }
            }
            if (count == n) {
                F(j,start,start+n) {
                    memory[j] = id;
                }
                cout << id << endl;
                    id++;
            } else {
                cout << "NULL" << endl;
            }
        }
        if(action=="erase") {
            cin >> x;
            bool error = true;
            F(j,0,m) {
                if(memory[j]==x) {
                    error = false;
                    memory[j] = 0;
                }
            }
            if(error || x<=0) cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
        }
        if(action=="defragment") {
            vector<int> new_memory;
            F(j,0,m){
                if (memory[j] != 0) new_memory.push_back(memory[j]);
            }
            while ((int)new_memory.size() < m) new_memory.push_back(0);
            memory = new_memory;
        }
    }
    
    return 0;
}