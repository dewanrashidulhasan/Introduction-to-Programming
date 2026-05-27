#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    int l=0,ans=INT_MAX;
    for (int r = 0; r < n; r++)
    {
        sum+=a[r];
        while (sum>=k)
        {
            ans=min(ans,r-l+1);
            sum-=a[l];
            l++;
        }
        
    }
    if (ans==INT_MAX)
    {
        cout<<-1<<'\n';
    }
    else
    {
        cout<<ans<<'\n';
    }
    

    return 0;
}