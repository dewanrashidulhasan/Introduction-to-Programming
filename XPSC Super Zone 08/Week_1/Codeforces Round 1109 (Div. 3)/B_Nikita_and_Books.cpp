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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll add=0,mn=0;
        bool ok=true;
        for (int i = 0; i < n-1; i++)
        {
            ll cur=a[i]+add;
            ll need=mn+1;
            if (cur<need)
            {
                ok=false;
                break;
            }
            add=cur-need;
            mn=need;
        }
        if (!ok)
        {
            cout<<"NO\n";
            continue;
        }
        ll prev=a[n-1]+add;
        if (prev>mn)
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