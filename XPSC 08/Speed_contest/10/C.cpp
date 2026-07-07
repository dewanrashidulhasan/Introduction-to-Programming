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
        if (m<n)
        {
            cout<<(n-m)<<'\n';
        }
        else
        {
            ll x=m%n;
            cout<<min(x,n-x)<<'\n';
        }
        
    }
    
    
    return 0;
}