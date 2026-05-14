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
        int n,x,k;
        cin>>n>>x>>k;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin>>y;
            v.push_back(y);
        }
        sort(v.begin(),v.end(),greater<int>());
        int eligiable=0;
        int clusters=0;
        int i = 0;
        while ( i < n&&clusters<k)
        {
            int mx_cluster=v[i];
            int cluster_size=0;
            while ( i < n&&v[i]==mx_cluster)
            {
                cluster_size++;
                i++;
            }
            eligiable+=cluster_size;
            clusters++;
        }
        cout<<min(eligiable,x)<<'\n';
        
    }
    
    
    return 0;
}