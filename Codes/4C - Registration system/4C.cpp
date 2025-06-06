#include <iostream>
#include <map>

using namespace std;

int main() {

    long long n;
    cin >> n;
    map<string,long long> T;
    string name;
    for(int i=0;i<n;i++) {
        cin >> name;
        if(T.contains(name)){
            cout << name << T[name] << endl;
            T[name]++;
        }else {
            cout << "OK" << endl;
            T[name] = 1;
        }
    }

    return 0;
}