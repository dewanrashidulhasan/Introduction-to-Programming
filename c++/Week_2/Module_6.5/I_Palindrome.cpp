#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int palindrom=1;
    for (auto it=s.begin(),is=(s.end()-1); it < is; it++,is--)
    {
        if (*it!=*is)
        {
            palindrom=0;
            break;
        }
               
    }
    if (palindrom)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}