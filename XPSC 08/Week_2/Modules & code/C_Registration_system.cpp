#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    unordered_map<string,int>mp;
    mp.reserve(t*2);
    while (t--)
    {
        string s;
        cin>>s;
        if (mp.find(s)==mp.end())
        {
            cout<<"OK\n";
            mp[s]=1;
        }
        else
        {
            int k=mp[s];
            string s1=s+to_string(k);
            cout<<s1<<'\n';
            mp[s]++;
            mp[s1]=1;
        }
        
    }
    
    
    return 0;
}