#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

    }
    int q;
    cin>>q;
    while (q--)
    {
        int m;
        cin>>m;
        if(adj_list[m].empty())
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            sort(adj_list[m].begin(),adj_list[m].end(),greater<int>());
            for(int x:adj_list[m])
                cout<<x<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}