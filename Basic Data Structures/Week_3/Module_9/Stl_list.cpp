#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={1,2,3,4,5,6};
    int a[]={10,20,30,40};
    vector<int>v={40,50,60};
    list<int> l2(v.begin(),v.end());
    if (l2.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }
    l2.resize(5,100);
    for (int val:l2)
    {
        cout<<val<<endl;
    }
    
    return 0;
}