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
        string s;
        cin >> s;
        string s1 = s;
        sort(s1.begin(), s1.end());
        auto it=unique(s1.begin(), s1.end());
        s1.erase(it, s1.end());
        int length = s1.size();
        for (char c : s)
        {
            int indx = s1.find(c);
            cout << s1[length - 1 - indx];
        }
        cout << "\n";
    }

    return 0;
}