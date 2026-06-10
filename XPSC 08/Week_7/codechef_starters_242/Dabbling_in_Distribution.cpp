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
        sort(a.begin(),a.end());
        ll presum=0, mx=LLONG_MIN, ans=0;
        for (int i = 1; i <=n-1; i++)
        {
            int idx=i-1;
            presum+=a[idx];
            mx=max(mx,a[idx]-idx);
            ll ok=n-i;
            if (presum<=i*ok)
            {
                if (mx<=ok)
                {
                    ans=i;
                }
                
            }
            
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}