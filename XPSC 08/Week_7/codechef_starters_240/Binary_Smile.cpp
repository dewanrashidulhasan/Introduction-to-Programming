#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string a,b;
        cin>>n>>a>>b;
        vector<int> cnta,cntb;
        for (int i = 0; i < n; i++)
        {
            if (a[i]=='1')
            {
                cnta.push_back(i);
            }
            if (b[i]=='1')
            {
                cntb.push_back(i);
            }
        }
        if (cnta.size()!=cntb.size())
        {
            cout<<-1<<'\n';
            continue;
        }
        ll ans=0;
        for (int i = 0; i < cnta.size(); i++)
        {
            if (cnta[i]!=cntb[i])
            {
                ans++;
            }
        }
        cout<<ans<<'\n';
            
        
        
        
    }
    
    
    return 0;
}