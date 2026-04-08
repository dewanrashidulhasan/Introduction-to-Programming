#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    ll increass=0;
    ll prev=0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        if(i==0)
        {
            prev=x;
            continue;
        }
        if (x<prev)
        {
            increass+=(prev-x);
        }
        else
        {
            prev=x;
        }
        
    }
    cout<<increass<<"\n";
    return 0;
}