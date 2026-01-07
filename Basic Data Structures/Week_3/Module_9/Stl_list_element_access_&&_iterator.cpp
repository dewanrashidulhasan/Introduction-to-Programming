#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,20,30,40,50};
    cout<<l.back()<<endl;
    cout<<l.front()<<endl;
    cout<<"the any position element is:-"<<*next(l.begin(),3)<<endl;
    return 0;
}