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
        int n,k,q;
        cin>>n>>k>>q;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll lent=0,sum=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i]<=q)
            {
                lent++;
            }
            else
            {
                if(lent>=k)
                {
                    ll x=lent-k+1;
                    sum+=x*(x+1)/2;
                }lent=0;
            }
            
        }
        if(lent>=k)
        {
            ll x=lent-k+1;
            sum+=x*(x+1)/2;
        }
        cout<<sum<<'\n';
    }
    
    
    return 0;
}