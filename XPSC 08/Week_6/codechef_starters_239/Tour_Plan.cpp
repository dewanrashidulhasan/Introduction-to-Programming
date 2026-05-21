#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    if (z<=50)
    {
        cout<<x<<'\n';
    }
    else
    {
        cout<<x+(z-50)*y<<'\n';
    }
    
    
    return 0;
}