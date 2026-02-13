#include<bits/stdc++.h>
using namespace std;
const int siz=1005;
vector<int>adj_list[siz];
bool visited_array[siz];
void dfs(int src)
{
    cout<<src<<" ";
    visited_array[src]=true;
    for(int child:adj_list[src])
    {
        if(!visited_array[child])
            dfs(child);
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
    dfs(0);
    return 0;
}