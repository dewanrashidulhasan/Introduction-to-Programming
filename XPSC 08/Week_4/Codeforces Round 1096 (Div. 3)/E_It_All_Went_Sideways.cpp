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
        vector<int> a(n+2,0),mn(n+2,0);
        ll total=0;
        for (int i = 1; i <=n; i++)
        {
            cin>>a[i];
            total+=a[i];
        }
        mn[n]=a[n];
        for (int i = n-1; i >= 1; i--)
        {
            mn[i]=min(a[i],mn[i+1]);
        }
        ll summin=0;
        for (int i = 1; i <=n; i++)
        {
            summin+=mn[i];
        }
        ll core=total-summin;
        ll ans=core;
        for (int i = 1; i <=n; i++)
        {
            ll cur=core-1;
            if (i==n||mn[i+1]>=a[i])
            {
                int l=0,lside=1,rside=i-1;
                while (lside<=rside)
                {
                    int mid=(lside+rside)/2;
                    if (mn[mid]<a[i])
                    {
                        l=mid;
                        lside=mid+1;
                    }
                    else rside=mid-1;
                }
                int cnt2=i-l;
                cur+=cnt2;
            }
            ans=max(ans,cur);
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}