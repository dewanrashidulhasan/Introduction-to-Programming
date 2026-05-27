#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    if (x>a)
    {
        cout<<"Alice"<<'\n';
    }
    else if (x<a)
    {
        cout<<"Bob"<<'\n';
    }
    else
    {
        if (y>b)
        {
            cout<<"Alice"<<'\n';
        }
        else if (y<b)
        {
            cout<<"Bob"<<'\n';
        }
        else
        {
            cout<<"Alice"<<'\n';
        }
        
        
    }
    
    
    return 0;
}