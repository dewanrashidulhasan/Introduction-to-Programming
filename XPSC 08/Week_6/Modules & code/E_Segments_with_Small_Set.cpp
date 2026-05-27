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
    vector<int> freq(100001,0);
    ll sum=0,l=0,ans=0;
    
    for (int r = 0; r < n; r++)
    {
        freq[a[r]]++;
        if(freq[a[r]]==1)
        {
            sum++;
        }
        while (sum>k)
        {
            freq[a[l]]--;
            if (freq[a[l]]==0)
            {
                sum--;
            }
            l++;
        }
        ans+=(r-l+1);
    }
    cout<<ans<<'\n';
    

    return 0;
}