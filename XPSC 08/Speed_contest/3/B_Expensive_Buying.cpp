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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        int sum=0;
        for (int i = 0; i < k; i++)
        {
            sum+=v[i];
        }
        cout<<sum<<'\n';

    }
    
    
    return 0;
}