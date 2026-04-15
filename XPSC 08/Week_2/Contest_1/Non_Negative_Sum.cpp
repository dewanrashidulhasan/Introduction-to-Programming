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
        ll sum =0;
        ll ans=0;
        vector<int> neg;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if (x>=0)
            {
                sum+=x;
                ans++;
            }
            else
            {
                neg.push_back(x);
            }
            
        }
        sort(neg.rbegin(),neg.rend());
        for(int x: neg)
        {
            if (sum+x>=0)
            {
                sum+=x;
                ans++;
            }
            else break;
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}