#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    set<int> s;
    for (int i = 1; i <=n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    // auto it=s.begin();
    // it++;
    // cout<<*it<<'\n';

    for(auto val:s)
        cout<<val<<" ";
    cout<<'\n';

    // auto it=s.find(6);
    // if (it!=s.end())
    // {
    //     cout<<"Found"<<'\n';
    // }
    // else
    // {
    //     cout<<"Not Found"<<'\n';
    // }
    
    // s.erase(5);
    // for(auto val:s)
    //     cout<<val<<" ";
    // cout<<'\n';
    // cout<<s.count(6)<<'\n';

    int c;
    cin>>c;
    // auto it=s.lower_bound(c);
    // // cout<<*it<<'\n';
    auto it=s.upper_bound(c);
    // cout<<*it<<'\n';
    if (it==s.end())
    {
        cout<<"END"<<'\n';
    }
    else
    {
        cout<<*it<<'\n';
    }
    
    return 0;
}