#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll r,b;
    cin>>r>>b;
    ll mn=min(r,b);
    ll skill=r+2*b+2*mn;
    cout<<skill<<'\n';
    
    return 0;
}