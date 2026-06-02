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
        ll maxt,maxn,sumn;
        cin>>maxt>>maxn>>sumn;
        ll k=min(maxt,sumn/maxn);
        ll ans=k*maxn*maxn;
        ll available=sumn-k*maxn;
        if (available>0&&k<maxt)
        {
            ans+=available*available;
        }
        cout<<ans<<'\n';
    }
    
     
    return 0;
}