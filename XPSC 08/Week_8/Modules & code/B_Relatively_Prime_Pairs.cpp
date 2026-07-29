#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll l,r;
    cin>>l>>r;
    cout<<"YES\n";
    while (l<r)
    {
        cout<<l<<' '<<l+1<<'\n';
        l+=2;
    }
    
    
    return 0;
}