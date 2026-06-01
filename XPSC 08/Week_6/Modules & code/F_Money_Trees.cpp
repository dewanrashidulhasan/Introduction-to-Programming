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
        vector<int> a(n);
        vector<int> h(n);
        ll sum=0,ans=0,l=0;
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int  i = 0; i < n; i++)
        {
            cin>>h[i];
        }
        for (int r = 0; r < n; r++)
        {
            if (r>0&&h[r-1]%h[r]!=0)
            {
                l=r;
                sum=0;
            }
            sum+=a[r];
            while (l<=r&&sum>k)
            {
                sum-=a[l];
                l++;
            }
            ans=max(ans,r-l+1);
                
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}