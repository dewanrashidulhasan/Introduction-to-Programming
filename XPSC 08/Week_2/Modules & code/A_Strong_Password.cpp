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
        string s;
        cin >> s;
        bool duble = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                for (char c = 'a'; c <= 'z'; c++)
                {
                    if (c != s[i])
                    {
                        s.insert(s.begin() + i, c);
                        duble = true;
                        break;
                    }
                }
                break;
            }
        }
        if (!duble)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                if (c != s[0])
                {
                    s=c+s;
                    break;
                }
            }
        }
        cout<<s<<"\n";
    }

    return 0;
}