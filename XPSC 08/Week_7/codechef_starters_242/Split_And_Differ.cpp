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
        vector<int> a(n),b;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool ok=true;
        for (int i = 0; i < n; i++)
        {
            int sum=a[i];
            int pre;
            if(b.empty())
            {
                pre=0;
            }
            else
            {
                pre=b.back();
            }
            int nxt=0;
            if (i+1<n&&a[i+1]<=2)
            {
                nxt=a[i+1];
            }
            vector<vector<int>> cnd;
            if (sum<=2)
            {
                cnd.push_back({sum});
            }
            else
            {
                cnd.push_back({sum});
                cnd.push_back({1,sum-1});
                cnd.push_back({sum-1,1});
            }
            bool found=false;
            for(auto&x:cnd)
            {
                if (x.front()==pre)
                {
                    continue;
                }
                if (nxt!=0&&x.back)
                {
                    /* code */
                }
                
            }
        }
        
    }
    
    
    return 0;
}