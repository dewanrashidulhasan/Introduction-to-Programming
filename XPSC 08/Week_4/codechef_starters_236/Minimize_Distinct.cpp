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
        vector<int> a(n);
        vector<int> present(n+1,0);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            present[a[i]]=1;
        }
        vector<int> val;
        val.reserve(n);
        for (int i = 1; i <=n; i++)
        {
            if(present[i])
                val.push_back(i);
        }
        
        vector<int>ans(n+1,INT_MAX);
        for (int i = 1; i <=n; i++)
        {
            vector<int> cnt(n+3,0);
            int all=0;
            for(int x:val)
            {
                int y=x-1;
                if(cnt[y]==0)
                    all++;
                cnt[y]++;
            }
            for (int j = i; j <= n; j++)
            {
                if (present[j])
                {
                    int start=j-1;
                    int end=j+1;
                    cnt[start]--;
                    if(cnt[start]==0)
                        all--;
                    if(cnt[end]==0)
                        all++;
                    cnt[end]++;
                }
                ans[i]=min(ans[i],all);
            }
            
        }
        for (int i = 1; i <=n; i++)
        {
            cout<<ans[i];
            if (i<n)
            {
                cout<<" ";
            }
            
        }
        cout<<'\n';
        
    }
    
    return 0;
}