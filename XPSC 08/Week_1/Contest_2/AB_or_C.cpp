#include<bits/stdc++.h>
using namespace std;
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
        vector<pair<long long,int>> v;
        v.reserve(3LL*n);
        for (int i = 0; i < n; i++)
        {
            long long a,b,c;
            cin>>a>>b>>c;
            v.push_back({a,i});
            v.push_back({b,i});
            v.push_back({c,i});
        }
        sort(v.begin(),v.end());
        vector<int> freq(n,0);
        int idx=0;
        int left=0;
        long long ans=LLONG_MAX;
        for (int j = 0; j < (int)v.size(); j++)
        {
            int ridx=v[j].second;
            if (freq[ridx]==0)
            {
                idx++;
            }
            freq[ridx]++;
            while (idx==n)
            {
                ans=min(ans,v[j].first-v[left].first);
                int lidx=v[left].second;
                freq[lidx]--;
                if (freq[lidx]==0)
                {
                    idx--;
                }
                left++;
            }
            
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}