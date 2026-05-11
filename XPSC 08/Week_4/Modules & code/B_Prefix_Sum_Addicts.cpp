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
        int n,k;
        cin>>n>>k;
        vector<ll> v(k);
        for (int i = 0; i < k; i++)
        {
            cin>>v[i];
        }
        if (k==1)
        {
            cout<<"Yes\n";
            continue;
        }
        vector<ll> a(k-1);
        for (int i = 0; i < k-1; i++)
        {
            a[i]=v[i+1]-v[i];
        }
        bool ok=true;
        for (int i = 1; i < k-1; i++)
        {
            if(a[i]<a[i-1])
            {
                ok=false;
                break;
            }
        }
        if (!ok)
        {
            cout<<"No\n";
            continue;
        }
        ll m=(ll)(n-k+1);
        if (v[0]>m*a[0])
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
        
    }
    
    
    return 0;
}