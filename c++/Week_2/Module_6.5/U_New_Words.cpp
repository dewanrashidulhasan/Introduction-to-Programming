#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for (auto it=s.begin(); it < s.end(); it++)
    {
        *it=toupper(*it);
    }
    int freq[26] = {0};
    for (auto it=s.begin(); it < s.end(); it++)
    {
        if (*it>='A'&&*it<='Z')
        {
            freq[*it-'A']++;
        }
        
    }
    string input="EGYPT";
    int ans=INT_MAX;
    for (auto it=input.begin(); it < input.end(); it++)
    {
        ans=min(ans,freq[*it-'A']);
        
    }
    cout<<ans<<endl;
    return 0;
}