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
        ll n,m,x;
        cin>>n>>m>>x;
        ll row=(x-1)%n;
        ll column=(x-1)/n;
        ll ans=row*m+column+1;
        cout<<ans<<'\n';
    }
    
    
    return 0;
}