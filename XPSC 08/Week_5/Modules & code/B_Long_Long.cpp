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
        ll mx_sum = 0;
        ll operation = 0;
        bool possible = false;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mx_sum += llabs(x);
            if (x < 0)
            {
                if (!possible)
                {
                    operation++;
                    possible = true;
                }
            }
            else if (x > 0)
            {
                possible = false;
            }
        }
        cout << mx_sum << ' ' << operation << '\n';
    }

    return 0;
}