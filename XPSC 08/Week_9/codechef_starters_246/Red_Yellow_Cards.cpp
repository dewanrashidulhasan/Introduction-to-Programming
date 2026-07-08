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
        int r,y;
        cin>>r>>y;
        int ans=r, rem=y-(r+1);
        if (rem>0)
        {
            ans+=(rem+1)/2;
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}