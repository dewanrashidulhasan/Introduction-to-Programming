#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<pair<string,string>,bool>mp;
    for (int i = 1; i <=n; i++)
    {
        string a,b;
        cin>>a>>b;
        mp[{a,b}]=true;

    }
    cout<<mp.size()<<'\n';
    return 0;
}