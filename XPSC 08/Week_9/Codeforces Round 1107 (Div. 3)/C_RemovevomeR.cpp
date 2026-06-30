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
        int ans=0;
        bool cnt1=false,cnt2=false;
        for (int i = 1; i < n; i++)
        {
            if (s[i-1]<s[i])
            {
                cnt1=true;
            }
            if (s[i-1]>s[i])
            {
                cnt2=true;
            }
            
        }
        if (cnt1&&cnt2)
        {
            ans=1;
        }
        else if (cnt1||cnt2)
        {
            ans=2;
        }
        else
        {
            ans =1;
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}