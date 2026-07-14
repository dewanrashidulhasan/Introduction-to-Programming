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
        int n,m;
        cin>>n>>m;
        vector<ll>a(n+1),b(n+1),v(m);
        for (int i = 1; i <=n; i++)
        {
            cin>>a[i];
            b[i]=b[i-1]+a[i];
        }
        for (int i = 0; i <m; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans=0,prev=0;
        for(int x:v)
        {
            ans+=(abs(b[x]-b[prev]));
            prev=x;
        }
        ans+=b[n]-b[prev];
        cout<<ans<<'\n';
    }
    
    
    return 0;
}