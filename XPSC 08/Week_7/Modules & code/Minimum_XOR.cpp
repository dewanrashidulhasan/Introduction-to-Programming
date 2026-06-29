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
        int xoor=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            xoor^=a[i];
        }
        int ans=xoor;
        for (int i = 0; i < n; i++)
        {
            ans=min(ans,xoor^a[i]);
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}