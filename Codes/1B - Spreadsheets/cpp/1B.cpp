#include <iostream>
#include <cmath>

using namespace std;

int main() {


    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        int type = 0;
        int k = 0;
        if(s[0]=='R'){
            bool dig = false;
            for(int i=1;i<s.size();i++) {
                if(isdigit(s[i])) dig=true;
                if(!isdigit(s[i]) && dig) {
                    type = 1;
                    k = i;
                }
            }
        }
        if(type) {
            int c = stoi(s.substr(k+1, s.size()));
            string column = "";
            while(c) {
                int j = c/26;
                int i = c-26*j;
                if(i>0) {
                    column = char(i+'A'-1)+column;

                }else {
                    column = 'Z' + column;
                    j-=1;
                }
                c = j;
            }
            cout << column << s.substr(1, k-1) << endl;
        }else {
            string c = "";
            int k= 0;
            int column = 0;
            for(int i=0;!isdigit(s[i]);i++) {
                c+=s[i];
                k++;
            }
            int power = 0;
            for(int i=c.size()-1;i>=0;i--){
                column+= (c[i]-'A'+1)*pow(26,power);
                power++;
            }
            cout << "R" << s.substr(k, s.size()) << "C" << column << endl;
        }
        
    }
    
    return 0;
}