#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool skip= false;
        int ans= INT_MAX;
        for (int i = 0; i < n; i++)
        {
            
            if (a[i]>=k)
            {
                skip=true;
                ans= min(ans,a[i]%k);
            }
            
        }
        if (skip==false)
        {
           cout<<"-1"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        
        
    }
    return 0;
}
