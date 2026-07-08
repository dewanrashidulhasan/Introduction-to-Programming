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
        ll cur,ans=0;
        cin>>cur;
        for (int i = 1; i < n; i++)
        {
            ll x;
            cin>>x;
            cur=max(cur,x);
            ans+=cur-x;
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}