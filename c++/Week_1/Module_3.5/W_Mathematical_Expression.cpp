#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,t;
    cin >>a>>s>>b>>t>>c;
    int ans;
    if (s=='+')
    {
        ans=a+b;
    }
    else if (s=='-')
    {
        ans=a-b;
    }
    else
    {
        ans=a*b;
    }
    if (ans==c)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<ans;
    }
    
    
    
    return 0;
}