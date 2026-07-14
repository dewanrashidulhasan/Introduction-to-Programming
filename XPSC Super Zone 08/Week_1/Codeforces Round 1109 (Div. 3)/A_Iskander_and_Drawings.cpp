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
        string s;
        cin>>n>>s;
        int cnt=0,ans=0;
        for(char c:s)
        {
            if (c=='#')
            {
                cnt++;
            }
            else
            {
                if (cnt>0)
                {
                    ans=max(ans,(cnt+1)/2);
                    cnt=0;
                }
                
            }
            
        }
        if (cnt>0)
        {
            ans=max(ans,(cnt+1)/2);
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}