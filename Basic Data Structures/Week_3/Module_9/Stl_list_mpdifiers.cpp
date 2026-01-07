#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,20,30,40,50};
    list<int> l2={100,200,300,400,500};
    l.push_back(40);
    l.push_front(100);
    l.pop_back();
    l.pop_front();

    // next(l.begin(),3);

    // l.insert(next(l.begin(),3),100);
    //l.insert(next(l.begin(),3),l2.begin(),l2.end());
    l.erase(next(l.begin(),2),next(l.begin(),4));
    auto it = find(l.begin(),l.end(),200);
    if (it==l.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
    
    for(int val: l)
    {
        cout<<val<<endl;
    }
    return 0;
}