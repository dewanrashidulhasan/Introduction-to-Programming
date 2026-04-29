#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    int initial_cost=x*100;
    int extra_cost=(y-x)*150;
    int sum=initial_cost+extra_cost;
    cout<<sum<<"\n";
    
    return 0;
}