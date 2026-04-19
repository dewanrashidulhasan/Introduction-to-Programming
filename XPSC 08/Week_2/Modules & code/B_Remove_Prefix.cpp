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
        unordered_set<int> seen;
        seen.reserve(n * 2);
        int cnt=0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (seen.count(a[i]))
            {
                cnt=i+1;
                break;
            }seen.insert(a[i]);
        }
        cout<<cnt<<'\n';
    }

    return 0;
}