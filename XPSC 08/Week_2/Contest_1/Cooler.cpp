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
        ll n,m;
        cin>>n>>m;
        ll sum1=n*(n+1)/2;
        ll sum2=m*(m+1)/2;
        cout<<sum1-sum2<<'\n';
    }
    
    return 0;
}