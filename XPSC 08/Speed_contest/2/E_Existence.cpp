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
        ll x, y;
        cin >> x >> y;
        if (x % 2 == 0)
        {
            if ((x / 2) * x == y)
                cout << "YES\n";
            else cout << "NO\n";
                
        }
        else cout << "NO\n";
            
    }

    return 0;
}