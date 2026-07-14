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
        int n,x,y;
        cin>>n>>x>>y;
        int g=gcd(x,y);
        bool ok=true;
        for (int i = 1; i <=n; i++)
        {
            int x;
            cin>>x;
            if (i%g!=x%g)
            {
                ok=false;
            }
            
        }
        if (ok)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    
    
    return 0;
}