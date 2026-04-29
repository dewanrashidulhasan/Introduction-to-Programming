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
        ll w;
        cin>>n>>w;
        vector<int> cnt(21,0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            int p=log2(x);
            cnt[p]++;
        }
        int height=0;
        while (true)
        {
            ll space=w;
            bool used=false;
            for (int i = 20; i >= 0; i--)
            {
                if(cnt[i]==0)
                    continue;
                int width=(1<<i);
                int take=min((ll)cnt[i],space/width);
                if(take>0)
                {
                    used=true;
                    cnt[i]-=take;
                    space-=1LL*take*width;
                }
            }
            if (!used)
                break;
            height++; 
        }
        
        cout<<height<<"\n";
    }
    
    
    return 0;
}