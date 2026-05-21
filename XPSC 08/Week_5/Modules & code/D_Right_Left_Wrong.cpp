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
        vector<ll> a(n+1),pre(n+1);
        for (int i = 1; i <=n; i++)
        {
            cin>>a[i];
            pre[i]=pre[i-1]+a[i];
        }
        string s;
        cin>>s;
        ll l=1,r=n,sum=0;
        while (true)
        {
            while (l<=n&&s[l-1]!='L')
            {
                l++;
            }
            while (r>=1&&s[r-1]!='R')
            {
                r--;
            }
            if (l<r)
            {
                sum+=pre[r]-pre[l-1];
                l++;
                r--;
            }
            else
            {
                break;
            } 
        }
        cout<<sum<<'\n';
    }
    return 0;
}