#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++)
    {
        int left=i+1;
        int right=n-1;
        while (left<right)
        {
            ll sum=a[i].first+a[left].first+a[right].first;
            if (sum==x)
            {
                cout<<a[left].second<<" "<<a[right].second<<" "<<a[i].second<<'\n';
                return 0;
            }
            if (sum<x)
            {
                left++;
            }
            else right--;
        }
        
    }
    
    cout<<"IMPOSSIBLE\n";
    
    return 0;
}