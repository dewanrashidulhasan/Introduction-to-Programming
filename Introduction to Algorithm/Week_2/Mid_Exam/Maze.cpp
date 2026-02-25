#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visited_array[1005][1005];
int parent[1005][1005];

vector<pair<int,int>> round_move={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool found=false;

bool valid(int i,int j)
{
    if(i<0||i>=n||j<0||j>=m)
        return false;
    else return true;
}
bool bfs(int starting_row,int starting_coloumn,
    int ending_row,int ending_coloumn)
{
    queue<pair<int,int>>q;
    q.push({starting_row,starting_coloumn});
    visited_array[starting_row][starting_coloumn]=true;
    while (!q.empty())
    {
        pair<int,int>current_val=q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci=current_val.first+round_move[i].first;
            int cj=current_val.second+round_move[i].second;
            if (!valid(ci,cj)||visited_array[ci][cj]||grid[ci][cj]=='#')
            {
                continue;
            }
            if (grid[ci][cj]=='.'||grid[ci][cj]=='D')
            {
                visited_array[ci][cj]=true;
                parent[ci][cj]=current_val.first*m+current_val.second;
                if (ci==ending_row&&cj==ending_coloumn)
                {
                    return true;
                }
                q.push({ci,cj});
            }
            
        }
    }
    return false;
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
    int starting_row=-1,starting_coloumn=-1,
    ending_row=-1,ending_coloumn=-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j]=='R')
            {
                starting_row=i;
                starting_coloumn=j;
            }
            else if (grid[i][j]=='D')
            {
                ending_row=i;
                ending_coloumn=j;
            }
        }
    }
    memset(visited_array,false,sizeof(visited_array));
    memset(parent,-1,sizeof(parent));
    if (starting_row!=-1&& ending_row!=-1)
    {
        bool found=bfs(starting_row,starting_coloumn,ending_row,ending_coloumn);
        if (found)
        {
            int ci=ending_row;
            int cj=ending_coloumn;
            while (!(ci==starting_row&&cj==starting_coloumn))
            {
                int p=parent[ci][cj];
                int pi=p/m;
                int pj=p%m;
                if (!(ci==ending_row&&cj==ending_coloumn)&&grid[ci][cj]=='.')
                {
                    grid[ci][cj]='X';
                }
                ci=pi;
                cj=pj;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}