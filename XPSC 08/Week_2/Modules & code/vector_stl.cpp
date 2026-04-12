#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin>>n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // v.clear();
    // cout<<"\n";
    // cout<<v.empty();


    // int n;
    // cin>>n;
    // vector<int> v;
    // v.assign(n,-1);
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n";

    // int n;
    // cin>>n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<"\n";



    // int n;
    // cin>>n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // auto lastElement= --v.end();
    // cout<<*lastElement<<"\n";

    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<"\n";
    auto mn=min_element(v.begin(),v.end());
    cout<<*mn<<"\n";
    auto mx=max_element(v.begin(),v.end());
    cout<<*mx<<"\n";
    return 0;
}