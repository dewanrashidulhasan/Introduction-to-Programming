#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    unordered_map<string, string> mp;
    mp.reserve(n*2);
    for (int i = 0; i < n; i++)
    {
        string ip_name,ip;
        cin>>ip_name>>ip;
        mp[ip]=ip_name;
    }
    for (int i = 0; i < m; i++)
    {
        string command,semiclone_ip;
        cin>>command>>semiclone_ip;
        semiclone_ip.pop_back();
        string ip=semiclone_ip;
        auto it=mp.find(ip);
        string ip_name="";
        if (it!=mp.end())
        {
            ip_name=it->second;
        }
        cout<<command<<" "<<ip<<"; #"<<ip_name<<"\n";
    }
    
    
    return 0;
}