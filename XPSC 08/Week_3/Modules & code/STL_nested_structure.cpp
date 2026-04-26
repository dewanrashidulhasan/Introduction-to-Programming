#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // map<vector<int>,int>mp;
    // vector<int> a;
    // a.push_back(5);
    // a.push_back(2);
    // a.push_back(1);
    // a.push_back(4);
    // a.push_back(7);
    // mp[a]=5;
    // for (auto [x,y]:mp)
    // {
    //     vector<int> v=x;
    //     for(auto val:v)
    //     {
    //         cout<<val<<" ";
    //     }
    //     cout<<'\n';
    //     cout<<y<<'\n';
    // }
    
    map<int,set<int>>mp;
    set<int>s1;
    s1.insert(2);
    s1.insert(5);
    s1.insert(4);

    set<int>s2;
    s2.insert(6);
    s2.insert(5);
    s2.insert(8);

    set<int>s3;
    s3.insert(4);
    s3.insert(6);
    s3.insert(2);

    mp[5]=s1;
    mp[7]=s2;
    mp[4]=s3;
    
    for(auto[x,y]:mp)
    {
        cout<<x<<"->";
        for(auto val:y)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    int x=6,y=8;
    auto lb1=mp.lower_bound(x);
    if (lb1!=mp.end())
    {
        int ans=lb1->first;
        cout<<ans<<'\n';
        auto lb2=mp[ans].lower_bound(y);
        if(lb2!=mp[ans].end())
        {
            cout<<*lb2<<'\n';
        }
        else{
            cout<<"Not Found"<<'\n';
        }
    }
    
    return 0;
}