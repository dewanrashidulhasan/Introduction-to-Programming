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
        int n,k;
        cin>>n>>k;
        for (int i = 1; i < n; i++)
        {
            int x;
            cin>>x;
            k&=x;
        }
        cout<<k<<'\n';
    }
    
    
    return 0;
}