#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int extra=m-n;
    int happy_customer=min(n,extra);
    cout<<happy_customer<<"\n";
    return 0;
}