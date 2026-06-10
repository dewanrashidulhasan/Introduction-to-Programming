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
        vector<ll> a(n,0);
        int ans=0;
        for (int i = 0; i < k; i++)
        {
            int card=k-i;
            int r=i/n, pos=i%n;
            int player;
            if (r%2==0)
            {
                player=pos;
            }
            else
            {
                player=n-1-pos;
            }
            a[player]+=card;
        }
        for(int x:a)
        {
            ans=max(ans,x);
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}