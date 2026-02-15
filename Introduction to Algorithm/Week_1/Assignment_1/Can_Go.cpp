#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool visited_array[1005][1005];
vector<pair<int,int>> round_move={{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i,int j)
{
    if(i<0||i>=n||j<0||j>=m)
        return false;
    else return true;
}
void dfs(int si,int sj)
{
    visited_array[si][sj]=true;
    for(int i=0; i<4; i++)
    {
        int ci=si+round_move[i].first;
        int cj=sj+round_move[i].second;
        if(valid(ci,cj) && !visited_array[ci][cj]&&grid[ci][cj]!='#')
            dfs(ci,cj);
    }
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
    int starting_row=-1,starting_coloumn=-1,ending_row=-1,ending_coloumn=-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j]=='A')
            {
                starting_row=i;
                starting_coloumn=j;
            }
            if (grid[i][j]=='B')
            {
                ending_row=i;
                ending_coloumn=j;
            }
        }
    }
    memset(visited_array,false,sizeof(visited_array));
    if (starting_row==-1||starting_coloumn==-1)
    {
        cout<<"NO"<<endl;
    }
    
    dfs(starting_row,starting_coloumn);

    if (visited_array[ending_row][ending_coloumn])
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}