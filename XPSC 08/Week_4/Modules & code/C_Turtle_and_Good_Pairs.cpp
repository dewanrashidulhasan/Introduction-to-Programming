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
        string s;
        cin >> n >> s;
        vector<pair<int, char>> freq;
        vector<int> cnt(26, 0);
        for (char ch : s)
        {
            cnt[ch - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] > 0)
            {
                freq.push_back({cnt[i], char('a' + i)});
            }
        }

        sort(freq.rbegin(), freq.rend());
        string maxpair;
        maxpair.reserve(n);
        bool ispair = true;
        while (ispair)
        {
            ispair = false;
            for (auto &it : freq)
            {
                if (it.first > 0)
                {
                    maxpair.push_back(it.second);
                    it.first--;
                    ispair = true;
                }
            }
        }

        cout << maxpair << '\n';
    }

    return 0;
}