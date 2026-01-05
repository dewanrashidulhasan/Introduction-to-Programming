#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long m;
    cin>>s>>m;
    long long length=0;
    for (size_t i = 0; i < s.size(); i++)
    {
        char charecter=s[i];
        long long repeat=1;
        if (i+1<s.size()&&s[i+1]>='2'&&s[i+1]<='9')
        {
            repeat=s[i+1]-'0';
            i++;
        }
        if (length<m&&m<=length+repeat)
        {
            cout<<charecter;
            return 0;
        }
        length+=repeat;
    }
    
    return 0;
}