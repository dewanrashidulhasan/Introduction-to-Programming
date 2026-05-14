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
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        while (q--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            if (x == 1)
            {
                int u = y;
                int val = z;
                v[u] = val;
            }
            else
            {
                int l = y;
                int r = z;
                int length = r - l + 1;
                if (length == 1)
                {
                    cout << v[l] << '\n';
                }
                else if (length % 2 == 0)
                {
                    int midleft = l + length / 2 - 1;
                    int midright = midleft + 1;
                    cout << max(v[midleft], v[midright]) << '\n';
                }
                else
                {
                    int mid = l + length / 2;
                    int ans = max(min(v[mid - 1], v[mid]), min(v[mid], v[mid + 1]));
                    cout << ans << '\n';
                }
            }
        }
    }

    return 0;
}