#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxN =(1LL<<15);
vector<int> allpalindrom;
bool ispalindrom(int x)
{
    string s=to_string(x);
    int len=s.size();
    for (int i = 0; i < len/2; i++)
    {
        if (s[i]!=s[len-i-1])
        {
            return false;
        }
        
    }
    return true;
}
void markpalindrom()
{
    for (int i = 0; i < maxN; i++)
    {
        if(ispalindrom(i))
        {
            allpalindrom.push_back(i);
        }
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    markpalindrom();
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),cnt(maxN+1,0);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
        }
        ll ans=n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allpalindrom.size(); j++)
            {
                int curr=(a[i]^allpalindrom[j]);
                ans+=cnt[curr];
            }
            
        }
        cout<<(ans/2)<<'\n';

    }
    
    return 0;
}