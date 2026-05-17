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
        int n;
        cin>>n;
        vector<ll> a(n+1),b(n+1),run(n+1);
        for (int i = 1; i <=n; i++)
        {
            cin>>a[i]>>b[i];
        }
        for (int i = 1; i <=n; i++)
        {
            cin>>run[i];
        }
        ll runtime=0;
        for (int i = 1; i <=n; i++)
        {
            ll arrival=runtime+(a[i]-b[i-1])+run[i];
            if (i==n)
            {
                cout<<arrival<<'\n';
                break;
            }
            ll wait=(b[i]-a[i]+1)/2;
            runtime=max(arrival+wait,b[i]);
        }
        
    }
    
    
    return 0;
}