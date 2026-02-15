#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visited_array[1005][1005];
int level[1005][1005];
vector<pair<int,int>> round_move={{-1,0},{1,0},{0,-1},{0,1}};

int n,m;

bool valid(int i,int j)
{
    if(i<0||i>=n||j<0||j>=m)
        return false;
    else return true;
}
int bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    visited_array[si][sj]=true;
    level[si][sj]=0;
    int room_cnt=1;
    while (!q.empty())
    {
        auto parent_node=q.front();
        q.pop();
        int parent_node_i = parent_node.first;
        int parent_node_j = parent_node.second;

        

        for (int i = 0; i < 4; i++)
        {
            int ci=parent_node_i+round_move[i].first;
            int cj=parent_node_j+round_move[i].second;
            if (valid(ci,cj)&&!visited_array[ci][cj]&&grid[ci][cj]=='.')
            {
                visited_array[ci][cj]=true;
                q.push({ci,cj});
                level[ci][cj]=level[parent_node_i][parent_node_j]+1;
                room_cnt++;
            }
            
        }
    }
    return room_cnt;
}
int main()
{
    
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>grid[i][j];
        }
    }
    
    memset(visited_array,false,sizeof(visited_array));
    memset(level,-1,sizeof(level));
    vector<int> room;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited_array[i][j]&&grid[i][j]=='.')
            {
                
                int sz=bfs(i,j);
                room.push_back(sz);
            }
            
        }
    }
    sort(room.begin(),room.end());
    if(room.empty())
        cout<<0<<endl;
    else
    {
        for(int x: room)
            cout<<x<<" ";
    }
    return 0;
}