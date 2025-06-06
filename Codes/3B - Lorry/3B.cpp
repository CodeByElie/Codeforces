#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n;
    int t;
    cin >> n >> t;

    vector<pair<int, int>> kayaks;
    vector<pair<int, int>> catamarans;

    int tp, pp;

    for (int i = 0; i < n; i++)
    {
        cin >> tp >> pp;
        if (tp == 1)
            kayaks.push_back({pp, i + 1});
        else
            catamarans.push_back({pp, i + 1});
    }

    sort(kayaks.begin(), kayaks.end());
    sort(catamarans.begin(), catamarans.end());

    int m = 0;

    int k1, k2, c;
    vector<int> sol;

    while (t > 1)
    {
        k1 = 0;
        if (kayaks.size() >= 1)
        {
            k1 = kayaks.back().first;
        }
        k2 = 0;
        if (kayaks.size() >= 2)
        {
            k2 = kayaks[kayaks.size() - 2].first;
        }
        c = 0;
        if (catamarans.size() >= 1)
            c = catamarans.back().first;

        if (k1 + k2 == 0 and c == 0)
            break;

        if (k1 + k2 > c)
        {
            m += k1;
            sol.push_back(kayaks.back().second);
            kayaks.pop_back();
            t -= 1;
        }
        else
        {
            m += c;
            sol.push_back(catamarans.back().second);
            catamarans.pop_back();
            t -= 2;
        }
    }

    if (t == 1 and kayaks.size() >= 1)
    {
        m += kayaks.back().first;
        sol.push_back(kayaks.back().second);
    }

    cout << m << endl;
    for (auto s : sol)
    {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}