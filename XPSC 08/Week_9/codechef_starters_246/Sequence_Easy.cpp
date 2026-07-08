#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=998244353,mx=2000;
vector<ll> fac(mx+1),ifac(mx+1);
ll modpow(ll a,ll b)
{
    ll res=1;
    while (b)
    {
        if (b&1)
        {
            res=res*a%mod;
        }
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
ll ncr(int n,int r)
{
    if(r<0||r>n)
    {
        return 0;
    }
    return fac[n]*ifac[r]%mod*ifac[n-r]%mod;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    fac[0]=1;
    for (int i = 1; i <=mx; i++)
    {
        fac[i]=fac[i-1]*i%mod;
        
    }
    ifac[mx]=modpow(fac[mx],mod-2);
    for (int i = mx; i >= 1; i--)
    {
        ifac[i-1]=ifac[i]*i%mod;
    }
    
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<vector<ll>>dp(n+1);
        for (int i = 0; i <=n; i++)
        {
            dp[i].resize(n+1);
        }
        dp[0][0]=1;
        for (int i = 1; i <=n; i++)
        {
            ll cur=0;
            for (int j = 1; j <=n; j++)
            {
                cur=(cur+dp[j-1][i-1])%mod;
                if (j-k>=0)
                {
                    cur=(cur-dp[j-k][i-1]+mod)%mod;
                }
                dp[j][i]=cur;
            }
            
        }
        ll ans=0;
        for (int i = 0; i < n; i++)
        {
            ll bad=0;
            if (i==0)
            {
                bad=1;
            }
            else
            {
                int z=n-i;
                for (int j = 1; j <=i; j++)
                {
                    ll way=ncr(z+1,j);
                    bad=(bad+way*dp[i][j])%mod;
                }
                

            }
            ll ok=ifac[n]*fac[i]%mod*fac[n-i]%mod;
            ans=(ans+bad*ok)%mod;
        }
        ans=ans*fac[n]%mod;
        cout<<ans<<'\n';
        
    }
    
    
    return 0;
}