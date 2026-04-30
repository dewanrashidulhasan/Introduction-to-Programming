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
        ll n;
        int m,q;
        cin>>n>>m>>q;
        vector<ll>b(m);
        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        while (q--)
        {
            ll a;
            cin>>a;
            if (a<b[0])
            {
                cout<<(b[0]-1)<<'\n';
            }
            else if (a>b[m-1])
            {
                cout<<(n-b[m-1])<<'\n';
            }
            else
            {
                int r=lower_bound(b.begin(),b.end(),a)-b.begin();
                ll L=b[r-1];
                ll R=b[r];
                cout<<(R-L)/2<<'\n';
            }
        }
        
    }
    
    
    return 0;
}