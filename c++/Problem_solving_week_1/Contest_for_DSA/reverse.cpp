#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for (char &c:s)
    {
        c=tolower(c);
    }
    
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}