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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            b[i] = n + 1 - a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
                cout << " ";
                cout << b[i];
        }
        cout << "\n";
    }

    return 0;
}