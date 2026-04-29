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
        int R,B,G;
        cin>>R>>B>>G;
        int bundle=min({R,B,G});
        R-=bundle;
        B-=bundle;
        G-=bundle;
        int sell=bundle*10+(R+B+G)*3;
        cout<<sell<<"\n";
    }
    
    
    return 0;
}