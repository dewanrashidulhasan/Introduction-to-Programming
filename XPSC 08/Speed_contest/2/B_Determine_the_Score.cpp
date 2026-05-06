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
        int x,n;
        cin>>x>>n;
        int score=x/10;
        int total_score=score*n;
        cout<<total_score<<'\n';
    }
    
    
    return 0;
}