#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(ll a,ll b,ll c)
{
    return gcd(a,c)==gcd(b,c);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if (a==b)
        {
            cout<<0<<'\n';
        }
        else if (ok(a,b,c))
        {
            cout<<1<<'\n';
        }
        else if (ok(a,b,c+1))
        {
            cout<<2<<'\n';
        }
        else
        {
            cout<<3<<'\n';
        }
        
    }
    
    
    return 0;
}