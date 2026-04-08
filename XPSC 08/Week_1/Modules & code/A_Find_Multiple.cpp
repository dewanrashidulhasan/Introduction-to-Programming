#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=((a+c-1)/c)*c;
    if(x<=b) cout<<x<<"\n";
    else cout<<-1<<"\n";
    return 0;
}