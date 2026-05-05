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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
           cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        ll sum=0;
        ll cnt=0;
        for (int i = 0; i < n; i++)
        {
            sum+=v[i];
            if (sum>=0)
            {
                cnt++;
            }
            else break;
        }
        cout<<cnt<<'\n';
    }
    
    
    return 0;
}