#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int,int> mp;
    mp.insert({10,20});
    for(auto [key,val]:mp)
    {
        cout<<key<<"->"<<val<<"\n";
    }
    mp[6]=40;
    // auto it=mp.lower_bound(6);
    auto it=mp.upper_bound(6);
    cout<<it->first<<" "<<it->second<<"\n";

    // auto it=mp.begin();
    // it--;
    // cout<<it->first<<" "<<it->second<<"\n";
    
    // auto it=mp.find(10);
    // if (it!=mp.end())
    // {
    //     cout<<it->first<<" "<<it->second<<'\n';
    // }
    // else
    // {
    //     cout<<"key not found"<<'\n';

    // }
    
    return 0;
}