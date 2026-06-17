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
        int mx=INT_MIN,mn=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int h;
            cin>>h;
            mx=max(mx,h);
            mn=min(mn,h);
        }
        cout<<mx-mn+1<<'\n';
    }
    
    
    return 0;
}