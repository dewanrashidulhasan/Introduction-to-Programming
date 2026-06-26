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
        vector<int> a(n);
        unordered_map<ll,ll> cnt,ops;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            int mn=0;
            while (true)
            {
                cnt[a[i]]++;
                ops[a[i]]+=mn;
                if (a[i]==0)
                {
                    break;
                }
                a[i]/=2;
                mn++;
            }
        }
        ll ans=LLONG_MAX;
        for (auto x:cnt)
        {
            int val=x.first;
            if (cnt[val]==n)
            {
                ans=min(ans,ops[val]);
            }
            
            
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}