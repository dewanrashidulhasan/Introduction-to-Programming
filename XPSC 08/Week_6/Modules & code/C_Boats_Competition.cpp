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
        cin>>n;
        vector<int> cnt(n+1,0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            cnt[x]++;
        }
        int ans=0;
        for (int i = 2; i <=2*n; i++)
        {
            int sum=0;
            for (int j = 1; j <=n; j++)
            {
                int x=i-j;
                if (x<1||x>n)
                {
                    continue;
                }
                if (j<x)
                {
                    sum+=min(cnt[j],cnt[x]);
                }
                else if (j==x)
                {
                    sum+=cnt[j]/2;
                }
                
            }
            ans=max(ans,sum);
        }
        cout<<ans<<'\n';
    }
    
    
    
    return 0;
}