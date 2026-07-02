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
        int n,k;
        cin>>n>>k;
        int sum=0,mn=0,mx=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            sum+=x;
            mn=min(mn,sum);
            mx=max(mx,sum);
        }
        if (mx-mn<=k)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
    }
    
    
    return 0;
}