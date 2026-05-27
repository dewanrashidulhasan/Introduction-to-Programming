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
        unordered_map<int,int> freq;
        int mx=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            freq[x]++;
            mx=max(mx,freq[x]);
        }
        cout<<(n-mx+1)<<'\n';
        
    }
    
    
    return 0;
}