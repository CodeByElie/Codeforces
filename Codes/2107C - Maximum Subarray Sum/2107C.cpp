#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define F(i,a,b) for (int i = a; i < b; i++)
#define DL(L) for(auto e:L) cout << e << " "; cout << endl;

ll maxSubArraySum(vector<ll> a)
{
    ll res = 0;
    ll tmp = 0;
    for (auto num : a)
    {
        tmp += num;
        if (tmp > res)
            res = tmp;
        if (tmp < 0)
        {
            tmp = 0;
        }
    }
    return res;
}

int main()
{

    int t;
    cin >> t;

    ll n, k, m, b, c;
    string s;

    F(i, 0, t)
    {
        cin >> n >> k >> s;
        vector<ll> a(n);
        F(j, 0, n)
        cin >> a[j];

        bool zero = false;

        F(j, 0, n)
        {
            if (s[j] == '0')
            {
                zero = true;
                a[j] = -1e13;
            }
        }

        m = maxSubArraySum(a);

        if (m > k || (m != k && !zero))
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            F(j, 0, n)
            {
                if (a[j] == -1e13)
                {
                    b = 0;
                    c = 0;
                    ll tmpb = 0;
                    for (int x = j - 1; x >= 0; x--)
                    {
                        tmpb += a[x];
                        if (tmpb > b)
                            b = tmpb;
                    }
                    ll tmpc = 0;
                    for (int x = j + 1; x < n; x++)
                    {
                        tmpc += a[x];
                        if (tmpc > c)
                            c = tmpc;
                    }
                    a[j] = k - b - c;
                    break;
                }
            }
            DL(a);
        }
    }
    return 0;
}