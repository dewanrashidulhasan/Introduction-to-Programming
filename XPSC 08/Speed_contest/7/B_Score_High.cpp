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
        int n;
        cin>>n;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<max({a,b,c,d})<<'\n';
    }
    
    
    return 0;
}