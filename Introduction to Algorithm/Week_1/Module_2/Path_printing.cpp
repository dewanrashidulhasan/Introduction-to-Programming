#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visited_array[1005];
int level[1005];
int parent[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited_array[src]=true;
    level[src]=0;
    while (!q.empty())
    {
        int parent_node=q.front();
        q.pop();

        for(int child: adj_list[parent_node])
        {
            if (!visited_array[child])
            {
                q.push(child);
                visited_array[child]=true;
                level[child]=level[parent_node]+1;
                parent[child]=parent_node;
            }   
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
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    int src,dst;
    cin>>src>>dst;
    bfs(src);
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