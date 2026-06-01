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
        int sum=0,total=0,l=0,mx=-1;
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i];
            total+=a[i];
        }
        if (total==k)
        {
            cout<<0<<'\n';
            continue;
        }
        if (total<k)
        {
            cout<<-1<<'\n';
            continue;
        }
        for (int r = 0; r < n; r++)
        {
            sum+=a[r];
            while (sum>k)
            {
                sum-=a[l];
                l++;
            }
            if (sum==k)
            {
                mx=max(mx,r-l+1);
            }
                
        }
        cout<<n-mx<<'\n';
            
        
        
    }
    
    
    return 0;
}