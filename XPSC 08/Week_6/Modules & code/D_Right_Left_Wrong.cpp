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
        vector<ll> pref(n+1,0);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            pref[i+1]=pref[i]+a[i];
        }
        string s;
        cin>>s;
        ll l=0,r=n-1,sum=0;
        while (l<r)
        {
            while (l<n&&s[l]!='L')
            {
                l++;
            }
            while (r>=0&&s[r]!='R')
            {
                r--;
            }
            if (l<r&&s[l]=='L'&&s[r]=='R')
            {
            sum+=pref[r+1]-pref[l];
            l++,r--;
            }
            else if (l>=r)
            {
                break;
            }
        }
        cout<<sum<<'\n';
    }
    
    
    return 0;
}