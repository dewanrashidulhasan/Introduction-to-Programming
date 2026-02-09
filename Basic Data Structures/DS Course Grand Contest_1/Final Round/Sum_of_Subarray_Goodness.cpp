#include<bits/stdc++.h>
const long long mod=1000000007;
const int maxvalue=1000005;
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    vector<long long > v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<long long > last(maxvalue,-1);
    long long ans=0;
    long long currentval=0;
    for (int i = 0; i < n; i++)
    {
        long long prev=last[v[i]];
        long long add=(i-prev) * v[i];
        currentval=(currentval+add)%mod;
        ans=(ans+currentval)%mod;
        last[v[i]]=i;
    }
    cout<<ans%mod<<endl;
    return 0;
}