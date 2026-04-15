#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    ll without_bribed=n*100LL;
    ll with_bribed=m+(60LL*n);
    cout<<min(with_bribed,without_bribed)<<'\n';
    return 0;
}