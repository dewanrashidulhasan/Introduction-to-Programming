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
        ll a,b,c;
        cin>>a>>b>>c;
        ll sqart=c*c;
        ll rectangle=a*b;
        if (sqart>=rectangle)
        {
            cout<<0<<'\n';
        }
        else if (a<=sqart||b<=sqart)
        {
            cout<<1<<'\n';
        }
        else
        {
            cout<<2<<'\n';
        }
        
    }
    
    
    return 0;
}