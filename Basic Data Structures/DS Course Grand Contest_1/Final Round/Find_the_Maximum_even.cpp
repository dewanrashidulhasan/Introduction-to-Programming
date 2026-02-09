#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long big_even=LLONG_MIN,even1=LLONG_MIN,even2=LLONG_MIN,odd1=LLONG_MIN,odd2=LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            big_even=max(big_even,a[i]);
            if (a[i]>even1)
            {
                even2=even1;
                even1=a[i];
            }
            else if (a[i]>even2)
            {
                even2=a[i];
            }
            
        }
        else
        {
            if (a[i]>odd1)
            {
                odd2=odd1;
                odd1=a[i];
            }
            else if (a[i]>odd2)
            {
                odd2=a[i];
            }
        }
        
    }
    long long ans= big_even;
    if (even1!=-1&&even2!=-1)
    {
        ans=max(ans,even1+even2);
    }
    
    if (odd1!=-1&&odd2!=-1)
    {
        ans=max(ans,odd1+odd2);
    }
    if (ans==LLONG_MIN)
    {
        cout<<"-1"<<endl;
    }
    else
    cout<<ans<<endl;
    
    return 0;
}