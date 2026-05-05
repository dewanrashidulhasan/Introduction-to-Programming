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
        vector<ll> v(n);
        for(auto &x:v)
            cin>>x;
        
        vector<ll> even;
        ll mx_odd=-1;
        for(auto x:v)
        {
            if(x%2==0)
                even.push_back(x);
            else mx_odd=max(mx_odd,x);
        }
        if(mx_odd==-1||even.empty())
        {
            cout<<0<<'\n';
            continue;
        }
        sort(even.begin(),even.end());
        int cnt=0,l=0,r=even.size()-1;
        while(l<=r)
        {
                if(even[l]<mx_odd)
                {
                    
                    mx_odd+=even[l];
                    cnt++;
                    l++;
                }
                else
                {
                    
                    mx_odd+=2*even[r];
                    cnt++;
                }
                
        }
        cout<<cnt<<'\n';
    }
    
    
    return 0;
}