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
        int x;
        cin>>x;
        int mx=1;
        while ((mx<<1)<=x)
        {
            mx<<=1;
        }
        int a=x^mx,b=mx;
        cout<<a<<" "<<b<<'\n';
        
    }
    
    
    return 0;
}