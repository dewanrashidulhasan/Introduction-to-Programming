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
        vector<ll> a(n);
        for (auto &i:a)
        {
            cin>>i;
        }
        sort(a.begin(),a.end());
        ll mn=a[0];
        vector<ll> mult;
        for (int i = 1; i < n; i++)
        {
            if (a[i]%mn==0)
            {
                mult.push_back(a[i]);
            }
            
        }
        ll gc=0;
        for(auto i:mult)
        {
            gc=__gcd(i,gc);
        }
        if (gc==mn)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
    }
    
    
    return 0;
}