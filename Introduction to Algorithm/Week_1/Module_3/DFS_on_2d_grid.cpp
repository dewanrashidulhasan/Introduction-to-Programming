#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool visited_array[105][105];
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
    cout<<si<<" "<<sj<<endl;
    visited_array[si][sj]=true;
    for(int i=0; i<4; i++)
    {
        
        int ci=si+round_move[i].first;
        int cj=sj+round_move[i].second;
        if(valid(ci,cj) && !visited_array[ci][cj])
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
    int si,sj;
    cin>>si>>sj;
    memset(visited_array,false,sizeof(visited_array));
    dfs(si,sj);
    return 0;
}