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
        vector<int> v;
        v.reserve(n);
        vector<int> cnt(n + 2, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] <= n)
                cnt[v[i]]++;
        }
        int miss = 0;
        for (int k = 0; k <= n; ++k)
        {
            if (k > 0)
            {
                bool is_missing = (cnt[k - 1] == 0);
                if (is_missing)
                {
                    miss++;
                }
            }
            int ans = max(miss, cnt[k]);
            cout << ans << " \n"[k == n];
        }
    }

    return 0;
}