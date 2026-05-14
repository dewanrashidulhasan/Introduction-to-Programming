#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;

    int austolia=a+c;
    int ans= max(0,austolia-b+1);
    cout<<ans<<'\n';
    return 0;
}