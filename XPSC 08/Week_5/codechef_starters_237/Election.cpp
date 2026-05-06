#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int needs=n/2+1;
    int ans=max(0,needs-k);
    cout<<ans<<'\n';
    return 0;
}