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
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        int total=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            total+=v[i];
        }
        if (total==x)
        {
            cout<<"NO\n";
            continue;
        }
        sort(v.begin(),v.end());
        int pre=0;
        for (int i = 0; i < n; i++)
        {
            if (pre+v[i]==x)
            {
                swap(v[i],v[i+1]);
            }
            pre+=v[i];
        }
        cout<<"YES\n";
        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
    
    
    return 0;
}