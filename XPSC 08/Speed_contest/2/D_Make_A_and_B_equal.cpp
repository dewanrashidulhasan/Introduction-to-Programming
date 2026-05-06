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
        int a,b;
        cin>>a>>b;
        while (a%2==0)
        {
            a/=2;
        }
        while (b%2==0)
        {
            b/=2;
        }
        if (a==b)
            cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    
    
    return 0;
}