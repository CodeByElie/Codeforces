#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int type = 0;
        if(s[0]=='R'){
            bool dig = false;
            for(int i=1;i<s.size();i++) {
                if(isdigit(s[i])) dig=true;
                if(!isdigit(s[i]) && dig) {
                    type = 1;
                }
            }
        }
        if(type) {
            cout << "type 1" <<endl;
        }else {
            string firstPart="";
            int k = i
        }
        
    }
    
    return 0;
}