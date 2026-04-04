#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(7);
        long long sum_of_abs = 0;
        int mx = INT_MIN;
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
            sum_of_abs += a[i];
            mx = max(mx, a[i]);
        }
        cout << ((2LL * mx) - sum_of_abs) << "\n";
    }

    return 0;
}