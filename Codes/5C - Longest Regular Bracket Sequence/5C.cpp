#include <iostream>
#include <stack>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int m = 0, k = 1, n;

    stack<int> t;
    t.push(-1);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            t.push(i);
        else
        {
            t.pop();
            if (!t.empty())
            {
                n = i - t.top();
                if (n == m)
                    k++;
                else if (n > m)
                {
                    m = n;
                    k = 1;
                }
            }
            else
            {
                t.push(i);
            }
        }
    }

    cout << m << " " << k << endl;

    return 0;
}