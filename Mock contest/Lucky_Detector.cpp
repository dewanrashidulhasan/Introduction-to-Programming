#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool lucky=false;
    for(char c:s)
    {
        if(c=='7')
        {
            lucky=true;
            break;
        }
    }
    if(lucky)
    cout<<"Lucky";
    else cout<<"Not Lucky";
    return 0;
}