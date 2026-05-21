#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll l=0,r=n-1,lsum=0,rsum=0,sum=0;
    while (l<=r)
    {
        if(lsum<=rsum)
        {
            lsum+=a[l++];
        }
        else
        {
            rsum+=a[r--];
        }
        if (lsum==rsum)
        {
            sum=lsum;
        }
        
    }
    cout<<sum<<'\n';
    
    return 0;
}