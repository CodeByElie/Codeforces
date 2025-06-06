#include <iostream>
#include <set>
 
using namespace std;
 
int main()
{
 
    set<string> users;
    long int l=0;
    string message;
    int k;
    while (getline(cin,message))
    {
        if (message.size() <=2 and message[0]!='+' and message[0]!='-')
            break;
        if (message[0] == '+')
        {
            users.insert(message.substr(1, message.size()));
        }
        else if (message[0] == '-')
        {
            users.erase(message.substr(1, message.size()));
        }
        else
        {
            for (int i = 0; i < message.size(); i++)
            {
                if (message[i] == ':')
                {
                    k = i;
                    break;
                }
            }
            l+=message.substr(k+1, message.size()).size()*users.size();
        }
    }
 
    cout << l << endl;
    return 0;
}