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
        map<int,int> freq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            freq[x]++;
        }
        int mx=0;
        for(auto& [val,cnt]:freq)
        {
            mx=max(mx,cnt);
        }
        if (mx==n)
        {
            cout<<0<<'\n';
            continue;
        }
        ll target=mx;
        ll operation=0;
        while (target<n)
        {
            operation++;
            ll clone=min(2*target,(ll)n);
            operation+=clone-target;
            target=clone;
        }
        cout<<operation<<'\n';
        
    }
    
    
    return 0;
}