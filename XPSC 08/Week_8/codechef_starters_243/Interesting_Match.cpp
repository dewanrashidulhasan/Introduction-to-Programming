#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    if (abs(x-y)<=2)
    {
        cout<<"Interesting\n";
    }
    else
    {
        cout<<"Boring\n";
    }
    
    
    return 0;
}