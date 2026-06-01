#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll ans=0,sum=0,l=0;
    for (int r = 0; r < n; r++)
    {
        if (r<n&&sum<k)
        {
            sum+=a[r];
            
        }
        while (sum>=k)
        {
            ans+=(n-r);
        
            sum-=a[l];
            l++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}