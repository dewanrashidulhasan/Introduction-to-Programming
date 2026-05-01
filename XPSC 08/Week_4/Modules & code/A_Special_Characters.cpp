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
        if (n % 2 == 0)
        {
            cout << "YES\n";
            
        }
        else
        {
            cout << "NO\n";
            continue;
        }
        int m = n / 2;
        string s;
        for (int i = 0; i < m; i++)
        {
            char c = 'A' + i;
            s += c;
            s += c;
        }
        cout << s <<'\n';
    }

    return 0;
}