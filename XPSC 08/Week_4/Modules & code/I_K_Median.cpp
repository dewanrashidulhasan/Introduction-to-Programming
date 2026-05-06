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
        sort(v.begin(),v.end());

        int m=n-k;
        int pos=(m+1)/2;
        int start=pos-1;
        int end=pos+k-1;

        vector<int> ans;
        for (auto i = start; i <=end; i++)
        {
            if (ans.empty()||v[i]!=ans.back())
            {
                ans.push_back(v[i]);
            }
            
        }
        for (auto i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" \n"[i+1==ans.size()];
            
        }
    }
    
    
    return 0;
}