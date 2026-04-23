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
            if(x==n-i)
                ans++;
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}