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
        int n;
        cin >> n;

        vector<int> a(n), p1(n), p2(n);

        // Prefix Sum তৈরি
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            // Left Part:
            // 1 -> +1
            // 2,3 -> -1
            if (a[i] == 1)
            {
                p1[i] = 1;
            }
            else
            {
                p1[i] = -1;
            }

            // Middle Part:
            // 1,2 -> +1
            // 3 -> -1
            if (a[i] == 1 || a[i] == 2)
            {
                p2[i] = 1;
            }
            else
            {
                p2[i] = -1;
            }

            if (i > 0)
            {
                p1[i] += p1[i - 1];
                p2[i] += p2[i - 1];
            }
        }

        vector<int> mx(n);

        // Right part non-empty রাখতে middle সর্বোচ্চ n-2 পর্যন্ত যেতে পারবে
        mx[n - 2] = p2[n - 2];

        for (int i = n - 3; i >= 0; i--)
        {
            if (mx[i + 1] > p2[i])
            {
                mx[i] = mx[i + 1];
            }
            else
            {
                mx[i] = p2[i];
            }
        }

        bool ok = false;

        // Left part-এর শেষ index = i
        for (int i = 0; i <= n - 3; i++)
        {
            if (p1[i] >= 0 && mx[i + 1] >= p2[i])
            {
                ok = true;
                break;
            }
        }

        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}