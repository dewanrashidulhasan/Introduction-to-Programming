#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool visited_array[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited_array[src]=true;
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
    int src,dst;
    cin>>src>>dst;
    bfs(src);
    if(visited_array[dst])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}