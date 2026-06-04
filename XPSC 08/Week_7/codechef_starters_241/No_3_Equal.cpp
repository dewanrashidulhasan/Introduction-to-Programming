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
        int ans=0,cnt=1;
        for (int i = 1; i < n; i++)
        {
            if (s[i]==s[i-1])
            {
                cnt++;
            }
            else
            {
                ans+=cnt/3;
                cnt=1;
            }
            
        }
        ans+=cnt/3;
        cout<<ans<<'\n';
    }
    
    
    return 0;
}