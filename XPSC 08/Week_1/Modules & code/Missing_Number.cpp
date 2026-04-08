#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    ll main_sum=n*(n+1)/2;
    ll sum=0;
    for (ll i = 0; i < n-1; i++)
    {
        ll x;
        cin>>x;
        sum+=x;
    }
    cout<<main_sum-sum<<"\n";
    return 0;
}