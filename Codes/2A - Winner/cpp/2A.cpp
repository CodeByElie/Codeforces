#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
    map<string,long int> players;
    string names[1000];
    int scores[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> names[i] >> scores[i];
        players[names[i]]+=scores[i];
    }

    long int m = 0;
    for(int i=0;i<n;i++){
        m = max(players[names[i]],m);
    }

    map<string, long int> players2;
    
    for(int i=0;i<n;i++) {
        players2[names[i]]+=scores[i];
        if(players[names[i]]==m and players2[names[i]]>=m) {
            cout << names[i] << endl;
            break;  
        }
    }



    return 0;
}
