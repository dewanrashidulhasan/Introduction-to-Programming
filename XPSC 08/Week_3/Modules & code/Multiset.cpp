#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    multiset<int> ms;
    for (int i = 1; i <=n; i++)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }
    // auto it=ms.begin();
    // it++;
    // cout<<*it<<'\n';

    for(auto val:ms)
        cout<<val<<" ";
    cout<<'\n';

    // auto it=ms.find(6);
    // if (it!=ms.end())
    // {
    //     cout<<"Found"<<'\n';
    // }
    // else
    // {
    //     cout<<"Not Found"<<'\n';
    // }
    
    // ms.erase(5);
    // ////O(logn+k);
    // for(auto val:ms)
    //     cout<<val<<" ";
    // cout<<'\n';

    // auto it=ms.find(9);
    // if(it!=ms.end())
    //     ms.erase(it);
    // ////O(logn+logn) / O(2logn) /O(logn);
    // for(auto val:ms)
    //     cout<<val<<" ";
    // cout<<'\n';


    // cout<<ms.count(5)<<'\n';

    int c;
    cin>>c;
    // auto it=ms.lower_bound(c);
    // cout<<*it<<'\n';
    auto it=ms.upper_bound(c);
    // cout<<*it<<'\n';
    if (it==ms.end())
    {
        cout<<"END"<<'\n';
    }
    else
    {
        cout<<*it<<'\n';
    }
    
    return 0;
}