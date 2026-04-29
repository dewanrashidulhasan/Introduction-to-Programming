#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        map<string,ll> cnt;
        ll ans=0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            for (char i = 'a'; i <='k'; i++)
            {
                if(i==s[0])
                    continue;
                string temp;
                temp+=i;
                temp+=s[1];
                ans+=cnt[temp];
            }
            for (char i = 'a'; i <='k'; i++)
            {
                if(i==s[1])
                    continue;
                string temp;
                temp+=s[0];
                temp+=i;
                ans+=cnt[temp];
            }
            cnt[s]++;
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}