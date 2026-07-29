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
        ll x,y;
        cin>>x>>y;
        if (y==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            int first=x,second=x*y,sum=first+second;
            cout<<first<<' '<<second<<' '<<sum<<'\n';
        }
        
    }
    
    
    return 0;
}