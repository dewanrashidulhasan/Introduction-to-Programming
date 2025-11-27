#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    for (auto i=s.begin(); i < s.end(); i++)
    {
        cout<<*i<<endl;
    }
    return 0;
}  