#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    set<pair<int,int>> s;
    multiset<pair<int,int>> ms;
    vector<int> ans;
    int customerNo=1;
    for (int i = 0; i < n; i++)
    {
        int type,money;
        cin>>type;
        if(type==1)
        {
            cin>>money;
            s.insert({customerNo,money});
            ms.insert({money,-customerNo});
            customerNo++;
        }
        else if (type==2)
        {
            auto pos=s.begin()->first,money=s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            auto types=ms.find({money,-pos});
            ms.erase(types);
        }
        else
        {
            auto pos= prev(ms.end());
            int money=pos->first;
            int id=-pos->second;
            ans.push_back(id);
            ms.erase(pos);
            s.erase({id,money});
        }
        
        
    }
    for(auto val:ans)
    {
        cout<<val<<" ";
    }
    cout<<'\n';
    return 0;
}