#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,x;
    cin>>n>>x;
    map<ll,ll> pos;
    for (int i = 1; i <=n; i++)
    {
        ll m;
        cin>>m;
        ll val =x-m;
        if (pos.find(val)!=pos.end())
        {
            cout<<pos[val]<<" "<<i<<'\n';
            return 0;
        }
        else pos[m]=i;
    }
    cout<<"IMPOSSIBLE\n";
    
    return 0;
}