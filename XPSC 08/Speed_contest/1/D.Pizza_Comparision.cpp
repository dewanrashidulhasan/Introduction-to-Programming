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
        int a,b;
        cin>>a>>b;
        int small=100*b;
        int large=225*a;
        if (small>large)
            cout<<"Small\n";
        
        else if (small<large)
            cout<<"Large\n";
        
        else
            cout<<"Equal\n";
        
        
    }
    
    
    return 0;
}