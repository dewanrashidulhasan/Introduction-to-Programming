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
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        map<int,int> mp2;
        int ans=0;
        for(auto[x,cnt]:mp)
        {
            int large=0;
            if (mp2.count(x-1))
            {
                large=min(cnt,mp2[x-1]);
            }
            int height=cnt-large;
            ans+=height;
            mp2[x]=cnt;
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}