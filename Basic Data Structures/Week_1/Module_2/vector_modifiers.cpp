#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v= {1,2,3,2,5,2};
    
    // vector<int> v2;
    // v2=v;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
    //index neah kaj na korle
    //necher sortcut forloop use 
    //korte pare
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
    // v.insert(v.begin()+2,100);

    // vector<int> v2= {6,7,8,9,10};
    // v.insert(v.begin()+5,v2.begin(),v2.end());
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // v.erase(v.begin()+1,v.begin()+5);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    // replace(v.begin(),v.end()-1,2,100);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
    auto it=find(v.begin(),v.end(),2);
    cout<<*it<<endl;
    cout<<v.front()<<" "<<v.back()<<endl;
    return 0;
}