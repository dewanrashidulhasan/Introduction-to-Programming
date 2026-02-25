#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool visited_array[105][105];
int level[105][105];
vector<pair<int,int>> round_move={{-1,2},{1,2},{1,-2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
int n,m;

bool valid(int i,int j)
{
    if(i<n && i>=0 && j<m && j>=0)
        return true;
    else return false;
}
void bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    visited_array[si][sj]=true;
    level[si][sj]=0;
    while (!q.empty())
    {
        pair<int,int> parent_node=q.front();
        q.pop();
        int parent_node_i = parent_node.first;
        int parent_node_j = parent_node.second;


        for (int i = 0; i < 8; i++)
        {
            int ci=parent_node_i+round_move[i].first;
            int cj=parent_node_j+round_move[i].second;
            if (valid(ci,cj)&&!visited_array[ci][cj])
            {
                q.push({ci,cj});
                visited_array[ci][cj]=true;
                level[ci][cj]=level[parent_node_i][parent_node_j]+1;
            }
            
        }
    }
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
    
        int si,sj,di,dj;
        cin>>si>>sj;
        cin>>di>>dj;
        memset(visited_array,false,sizeof(visited_array));
        memset(level,-1,sizeof(level));
        bfs(si,sj);
        cout<<level[di][dj]<<endl;

    }
    
    

    return 0;
}