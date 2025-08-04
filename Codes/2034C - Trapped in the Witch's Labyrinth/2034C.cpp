#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i, a, b) for (int i = a; i < b; i++)
#define DL(L)             \
    for (auto e : L)      \
        cout << e << " "; \
    cout << endl;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> M(n, vector<char>(m));
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        vector<vector<bool>> exit(n, vector<bool>(m, false));
        set<pair<int, int>> unspecified;
        int ans = n * m;
        F(i, 0, n)
        F(j, 0, m)
        cin >> M[i][j];

        F(i, 0, n)
        {
            F(j, 0, m)
            {
                if (!visited[i][j])
                {
                    int x = j, y = i;
                    set<pair<int, int>> curr_visited;
                    char dir;
                    while ((x >= 0 && x < m) && (y >= 0 && y < n) && !visited[y][x])
                    {
                        dir = M[y][x];
                        visited[y][x] = true;
                        curr_visited.insert({x, y});
                        if (dir == 'U')
                            y--;
                        if (dir == 'D')
                            y++;
                        if (dir == 'L')
                            x--;
                        if (dir == 'R')
                            x++;
                        if (dir == '?')
                        {
                            unspecified.insert({x, y});
                        }
                    }
                    if (!((x >= 0 && x < m) && (y >= 0 && y < n)) || exit[y][x])
                    {
                        for (auto p : curr_visited)
                        {
                            exit[p.second][p.first] = true;
                            ans--;
                        }
                    }
                }
            }
        }
        for (auto p : unspecified)
        {
            if (
                (p.first > 0 && !exit[p.second][p.first - 1]) || (p.first < m - 1 && !exit[p.second][p.first + 1]) || (p.second > 0 && !exit[p.second - 1][p.first]) || (p.second < n - 1 && !exit[p.second + 1][p.first]))
                continue;
            else
                ans--;
        }
        cout << ans << endl;
    }

    return 0;
}