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
        vector<char> sum(n, '0');
        int mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, a[i]);
            if (a[i] == mn)
            {
                sum[i] = '1';
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            mx = max(mx, a[i]);
            if (a[i] == mx)
            {
                sum[i] = '1';
            }
        }
        for(char c:sum)
        {
            cout<<c;
        }
        cout<<'\n';
    }

    return 0;
}