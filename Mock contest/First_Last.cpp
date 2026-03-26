#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<long long,pair<int,int>> pos;
    vector<long long> order;
    order.reserve(max(0,n));
    for(int i=1;i<=n;i++)
    {
        long long x;
        cin>>x;
        if(pos.find(x)==pos.end())
        {
            pos[x].first=i;
            pos[x].second=i;
            order.push_back(x);
        }  
        else 
            pos[x].second=i;
    }
    sort(order.begin(),order.end());
    for(auto val : order)
    {
        cout<<val<<" "<<pos[val].first<<" "<<pos[val].second<<endl;
    }
    
    return 0;
}