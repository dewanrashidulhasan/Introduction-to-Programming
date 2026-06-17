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
        int n,k;
        string s;
        cin>>n>>k>>s;
        bool ok=true;
        for (int i = 0; i < k; i++)
        {
            int cnt=0;
            for (int j = i; j < n; j+=k)
            {
                if (s[j]=='1')
                {
                    cnt++;
                }
                
            }
            if (cnt%2==1)
            {
                ok=false;
                break;
            }
            
        }
        if (ok)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
        
    }
    
    
    return 0;
}