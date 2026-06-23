#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int B=30;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,K;
    cin>>n>>K;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> bits(B+1,0);
    for (int i = 0; i < n; i++)
    {
        for (int k = B; k >= 0; k--)
        {
            if ((a[i]>>k)&1)
            {
                bits[k]++;
            }
        }
    }
    int ans=0;
    for (int i = B; i >= 0; i--)
    {
        if (bits[i]==n)
        {
            ans+=(1LL<<i);
        }
        else
        {
            int need=n-bits[i];
            if (K>=need)
            {
                ans+=(1LL<<i);
                K-=need;
            }
            
        }
        
    }
    cout<<ans<<'\n';
    }
    
    
    return 0;
}