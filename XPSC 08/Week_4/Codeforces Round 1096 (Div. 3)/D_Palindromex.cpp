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
        vector<int> a;
        a.reserve(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int best = 0;
        for (int l = 0; l < 2 * n; l++)
        {
            vector<int> cnt(n + 1, 0);
            for (int r = l; r < 2 * n; r++)
            {
                if (a[r] <= n)
                    cnt[a[r]]++;
                bool palindrom = true;
                for (int i = 0; l + i <= r - i; i++)
                {
                    if (a[l + i] != a[r - i])
                    {
                        palindrom = false;
                        break;
                    }
                }
                if (!palindrom)
                    continue;
                int mn = 0;
                while (mn <= n && cnt[mn] > 0)
                    mn++;
                best = max(best, mn);
            }
        }

        cout << best << '\n';
    }

    return 0;
}