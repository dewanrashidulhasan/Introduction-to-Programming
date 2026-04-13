#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        vector<int> a;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        // for(auto val: a)
        // {
        //     cout<<val<<" ";
        // }
        // cout<<"\n";
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}