#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
        int n,q;
        cin>>n>>q;
        vector<long long> a(n),b(n);
        for(auto &i:a) cin>>i;
        for(auto &i:b) cin>>i;

        for (int i = 0; i < n; i++)
        {
            if(b[i]>a[i])
            a[i]=b[i];
        }
        
        for (int i = n-2; i>=0; i--)
        {
            if(a[i]<a[i+1])
            a[i]=a[i+1];
        }
        
        for(int i=1; i<n;i++)
        a[i]+=a[i-1];

        while (q--)
        {
            int l,r;
            cin>>l>>r;
            l--,r--;
            
            long long ans=a[r];
            if(l-1>=0) ans-=a[l-1];
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}