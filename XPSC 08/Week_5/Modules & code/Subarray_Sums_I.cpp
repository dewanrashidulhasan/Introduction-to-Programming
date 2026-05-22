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
    ll l=0,sum=0,cnt=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        while (l<=i&&sum>x)
        {
            sum-=a[l];
            l++;
        }
        if (sum==x)
        {
            cnt++;
        }
        
    }
    cout<<cnt<<'\n';
    return 0;
}