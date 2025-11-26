#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s.size()<<endl;
    if (s.empty()==true)
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"not empty"<<endl;
    }
    s.resize(15,'x');
    cout<<s<<endl;
    s.resize(7);
    cout<<s<<endl;
    
    
    return 0;
}