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
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            ans^=x;
        }
        if (ans==0)
        {
            cout<<0<<'\n';
        }
        else if (n&1)
        {
            cout<<ans<<'\n';
        }
        else
        {
            cout<<-1<<'\n';
        }
        
    }
    
    
    return 0;
}