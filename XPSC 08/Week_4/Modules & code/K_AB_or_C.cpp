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
        vector<pair<int,int>> v;
        v.reserve(3*n);
        for (int i = 0; i < n; i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            v.push_back({a,i});
            v.push_back({b,i});
            v.push_back({c,i});
        }
        sort(v.begin(),v.end());
        vector<int> cnt(n,0);
        int minval=0;
        int ans=INT_MAX;
        int left=0;
        for (int right = 0; right< (int)v.size(); right++)
        {
            auto[val,row]=v[right];
            if(cnt[row]==0) minval++;
            cnt[row]++;
            while (minval==n)
            {
                ans=min(ans,v[right].first-v[left].first);
                auto[lval,lrow]=v[left];
                cnt[lrow]--;
                if(cnt[lrow]==0)
                    minval--;
                left++;
            }
            
        }
        cout<<ans<<'\n';
        
    }
    
    
    return 0;
}