#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,s;
    cin>>n>>s;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll sum=0,l=0,ans=0;
    for (int r = 0; r < n; r++)
    {
        sum+=a[r];
        while (sum>s&&l<=r)
        {
            sum-=a[l];
            l++;
        }
        ll len=r-l+1;
        ans=max(ans,len);
    }
    cout<<ans<<'\n';
    return 0;
}