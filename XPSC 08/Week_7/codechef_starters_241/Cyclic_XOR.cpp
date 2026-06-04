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
        ll n,k;
        cin>>n>>k;
        if (n%3!=0)
        {
            cout<<1<<'\n';
            continue;
        }
        ll temp=n,x=0;
        while (temp%2==0)
        {
            x++;
            temp/=2;
        }
        ll d=1ll<<(min(x,k)+1);
        ll pow=1*k*d,ans=1;
        ll xor=2;
        ll mod=998244353;
        while (pow>0)
        {
            if (pow&1)
            {
                ans=(ans*xor)%mod;
            }
            xor=(xor*xor)%mod;
            pow>>=1;
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}