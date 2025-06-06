#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{

    string s;
    cin >> s;
    long long bo = 0;
    long long ans = 0;
    priority_queue<pair<long long, long long>> q;
    long long vo, vc;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            bo++;
        else if (s[i] == ')')
            bo--;
        else
        {
            cin >> vo >> vc;
            s[i] = ')';
            ans += vc;
            bo--;
            q.push({vc - vo, i});
        }
        if (bo < 0)
        {
            if (q.empty())
                break;
            pair<long long, long long> m = q.top();
            q.pop();
            bo += 2;
            ans -= m.first;
            s[m.second] = '(';
        }
    }

    if (bo != 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << ans << endl;
        cout << s << endl;
    }

    return 0;
}