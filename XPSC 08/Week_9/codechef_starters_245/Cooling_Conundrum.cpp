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
        int x,y;
        cin>>x>>y;
        int ans=0;
        for (int i = x; i > y; i--)
        {
            ans+=(i+9)/10;
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}