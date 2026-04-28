#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if ((int)s.size() != n)
            {
                cout << "NO\n";
                continue;
            }
            unordered_map<char, int> cn;
            unordered_map<int, char> nc;
            cn.reserve(n);
            nc.reserve(n);
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                char c = s[i];
                int n = a[i];
                if (cn.count(c))
                {
                    if (cn[c] != n)
                    {
                        ok = false;
                        break;
                    }
                }
                else
                {
                    cn[c] = n;
                }
                if (nc.count(n))
                {
                    if (nc[n] != c)
                    {
                        ok = false;
                        break;
                    }
                }
                else
                {
                    nc[n] = c;
                }
            }
            if (ok)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}