#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if (a+b==c||a+c==b||b+c==a)
            cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    
    return 0;
}