#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={10,20,30,60,60,10,40,50};
    // l.sort();
    l.sort(greater<int>());
    l.remove(10);
    l.unique();
    l.reverse();
    for(int val:l)
    {
        cout<<val<<endl;
    }
    return 0;
}