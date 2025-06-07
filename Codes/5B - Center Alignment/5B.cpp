#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{

    vector<string> T = {};
    string line;
    int m = 0;
    while (getline(cin, line))
    {
        if (line.size() > m)
        {
            m = line.size();
        }
        T.push_back(line);
    }
    int k  =0;
    for (int i = 0; i < m + 2; i++)
        cout << "*";
    cout << endl;
    for (auto s : T)
    {
        if (s.size() != m)
        {   
            if(m-s.size()==1){
                if(k) {
                    cout << "* " << s;
                }else {
                    cout << "*" << s << " ";
                }
                k = (k+1)%2;
            }
            else if((m-s.size())%2==0) {
                cout << "*" << setw((m - s.size()) / 2) << " " << s << setw((m - s.size()) / 2) << " ";
            }else {
                cout << "*" << setw((m - s.size()) / 2+k) << " " << s << setw((m - s.size()) / 2+(k+1)%2) << " ";
                k=(k+1)%2;
            }
        }
        else
            cout << "*" << s;
        cout << "*" << endl;
    }
    for (int i = 0; i < m + 2; i++)
        cout << "*";
    cout << endl;

    return 0;
}
