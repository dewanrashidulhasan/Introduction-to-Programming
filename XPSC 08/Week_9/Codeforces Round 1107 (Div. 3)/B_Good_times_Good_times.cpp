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
        ll n;
        cin>>n;
        ll pow=1,x=n;
        while (x>0)
        {
            pow*=10;
            x/=10;
        }
        cout<<pow+1<<'\n';
    }
    
    
    return 0;
}