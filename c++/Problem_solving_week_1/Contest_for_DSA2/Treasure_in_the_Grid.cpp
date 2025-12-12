#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,q;
    cin >> n >> m >> q;
    int grid[1000][1000];
    int psum[1000][1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>grid[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            psum[i][j]=grid[i][j];
            if (i>0)
            {
                psum[i][j]+=psum[i-1][j];
            }
            
            if (j>0)
            {
                psum[i][j]+=psum[i][j-1];
            }
            if (i>0&&j>0)
            {
                psum[i][j]-=psum[i-1][j-1];
            }
            
        }
        
        
    }
    while (q--)
        {
            int r,c,r1,c1;
            cin>>r>>c>>r1>>c1;
            int res=psum[r1][c1];
            if (r>0)
            {
                res-=psum[r-1][c1];
            }
            
            if (c>0)
            {
                res-=psum[r1][c-1];
            }
            if (r>0&&c>0)
            {
                res+=psum[r-1][c-1];
            }
            cout<<res<<endl;
        }
    return 0;
}