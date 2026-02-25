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
int dfs(int si,int sj)
{
    visited_array[si][sj]=true;
    int area=1;
    for(int i=0; i<4; i++)
    {
        
        int ci=si+round_move[i].first;
        int cj=sj+round_move[i].second;
        if(valid(ci,cj) && !visited_array[ci][cj]&&grid[ci][cj]=='.')
            area+=dfs(ci,cj);
    }
    return area;
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
    int min_area=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!visited_array[i][j]&&grid[i][j]=='.')
            {
                int area= dfs(i,j);
                min_area=min(min_area,area);
            }
            
        }
    }
    if(min_area==INT_MAX)
    cout<<"-1"<<endl;
    else cout<<min_area<<endl;
    return 0;
}