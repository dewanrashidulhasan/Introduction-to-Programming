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
        int mn=(n+3)/4;
        int extra=max(0,n-2*mn);
        int cost=200*mn+100*extra;
        cout<<cost<<'\n';
    }
    
    
    return 0;
}