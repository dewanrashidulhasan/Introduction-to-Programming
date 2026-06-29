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
        cin>>n>>k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            int mask=0;
            for(char c:s)
            {
                mask=(mask<<1)+(c-'0');
            }
            a.push_back(mask);
        }
        int lim=1<<k;
        vector<bool> dp(lim,false);
        dp[0]=true;
        for(int x:a)
        {
            vector<bool> ndp=dp;
            for (int i = 0; i < lim; i++)
            {
                if (dp[i])
                {
                    ndp[i|x]=true;
                }
                
            }
            dp=ndp;
        }
        bool ok=true;
        for (int i = 1; i < lim; i++)
        {
            if (!dp[i])
            {
                ok=false;
                break;
            }
            
        }
        if (ok)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    }
    
    
    return 0;
}