#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define FR(a, b) for (int _ = a; _ < b; _++)

int main()
{

    string s, a, b;
    cin >> s >> a >> b;

    bool fo = false, ba = false;

    for (int i = 0; i < s.size() -max(a.size(),b.size())+1; i++)
    {
        if (s.substr(i, a.size()) == a && !fo)
        {
            for (int j = i+a.size(); j < s.size() - b.size()+1; j++)
            {
                if (s.substr(j, b.size()) == b){
                    fo = true;
                }
            }
        }
        if (s.substr(i, b.size()) == b && !ba)
        {
            for (int j = i+b.size(); j < s.size() - a.size()+1; j++)
            {
                if (s.substr(j, a.size()) == a)
                    ba = true;
            }
        }
    }

    if (fo && ba)
        cout << "both" << endl;
    else if (fo)
        cout << "forward" << endl;
    else if (ba)
        cout << "backward" << endl;
    else
        cout << "fantasy" << endl;

    return 0;
}