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
        int n,q;
        string s;
        cin>>n>>q>>s;
        vector<int> a(n+1);
        for (int i = 1; i < n; i++)
        {
            if (s[i-1]==s[i])
            {
                a[i]=a[i-1]+1;
            }
            else
            {
                a[i]=a[i-1];
            }
            
        }
        while (q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            int cnt=a[r-1]-a[l-1], mn=(cnt+1)/2;
            if (mn<=k)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
            
        }
        

    }
    
    
    return 0;
}