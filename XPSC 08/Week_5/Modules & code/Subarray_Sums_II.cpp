#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll sum=0,cnt=0;
    map<ll,ll>mp;
    mp[0]=1;
    for (int i = 0; i < n; i++)
    {   sum+=a[i];
            cnt+=mp[sum-x];
            mp[sum]++;
        
    }
    cout<<cnt<<'\n';
    return 0;
}