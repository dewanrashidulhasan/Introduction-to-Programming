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
        map<int,int> cnt;
        int mx=0;
        for (int i = 0; i <n; i++)
        {
            int x;
            cin>>x;
            cnt[x]++;
            mx=max(mx,cnt[x]);
        }        
        int ans=INT_MIN;
        if (mx>n/2)
        {
            ans=2*mx-n;
        }
        else
        {
            ans=n%2;
        }
        
        cout<<ans<<'\n';
    }
    
    return 0;
}