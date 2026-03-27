#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<long long>  presum(n+1,0);
    for (int i = 1; i <=n; i++)
    {
        long long x;
        cin>>x;
        presum[i]=presum[i-1]+x;
    }
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<presum[r]-presum[l-1]<<"\n";
    }
    return 0;
}