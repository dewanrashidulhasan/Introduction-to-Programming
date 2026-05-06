#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int array[3]={a,b,c};
        sort(array,array+3);
        int x=array[0],y=array[1],z=array[2];
        int moves=z-(x+y)+1;
        int ans=max(0,moves);
        cout<<ans<<'\n';
    }
    
    
    return 0;
}