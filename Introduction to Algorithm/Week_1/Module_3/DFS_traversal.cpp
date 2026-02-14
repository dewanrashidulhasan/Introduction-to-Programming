#include<bits/stdc++.h>
using namespace std;
const int siz=1005;
vector<int>adj_list[siz];
bool visited_array[siz];
int parent[siz];

void dfs(int src)
{
    cout<<src<<" ";
    visited_array[src]=true;
    for(int child:adj_list[src])
    {
        if(!visited_array[child])
        {
            parent[child]=src;
            dfs(child);
        }
            
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while (e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited_array,false,sizeof(visited_array));
    memset(parent,-1,sizeof(visited_array));
    int src,dst;
    cin>>src>>dst;
    dfs(src);
    vector<int> path;
    int node=dst;
    while (node!=-1)
    {
        path.push_back(node);
        node=parent[node];
    }
    reverse(path.begin(),path.end());
    for(int x:path)
    cout<<x<<" ";
    return 0;
}