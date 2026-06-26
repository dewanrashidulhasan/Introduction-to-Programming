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
        int x=(n-1)/k;
        int ans=(x*k)+1;
        cout<<ans<<'\n';
    }
    
    
    return 0;
}