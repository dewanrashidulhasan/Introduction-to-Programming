#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll h;
    cin>>n>>h;
    ll mx=0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        mx=max(mx,x);
    }
    ll full_damage=mx*(mx-1)/2;
    if(h>full_damage)
        cout<<"Hablu\n";
    else cout<<"Dablu\n";
    return  0;
}