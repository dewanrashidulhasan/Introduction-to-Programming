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
        vector<int> a;
        a.reserve(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<int> cnt(26,0);
        string s;
        for (int i = 0; i < n; i++)
        {
            for (int c = 0; c < 26; c++)
            {
                if (cnt[c]==a[i])
                {
                    s+=char('a'+c);
                    cnt[c]++;
                    break;
                }
                
            }
            
        }
        cout<<s<<'\n';
    }

    return 0;
}