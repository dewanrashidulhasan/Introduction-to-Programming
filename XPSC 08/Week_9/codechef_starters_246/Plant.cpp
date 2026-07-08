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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for (int i = 0; i < n-1; i++)
        {
            ans=max(ans,min(a[i],a[i+1]));
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}