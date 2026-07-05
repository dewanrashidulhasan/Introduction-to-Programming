#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    vector<ll> divisors;
    for (ll i = 1; i <=sqrt(n); i++)
    {
        if (n%i==0)
        {
            divisors.push_back(i);
            if ((n/i)!=i)
            {
                divisors.push_back(n/i);
            }
            
        }
        
    }
    sort(divisors.begin(),divisors.end());
    if (divisors.size()<k)
    {
        cout<<-1<<'\n';
    }
    else
    {
        cout<<divisors[k-1]<<'\n';
    }
    
    
    return 0;
}