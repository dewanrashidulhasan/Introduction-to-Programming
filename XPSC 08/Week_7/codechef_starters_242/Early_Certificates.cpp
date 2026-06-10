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
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        string ans;
        int l= min(n,k);
        for (int i = 0; i < l; i++)
        {
            if (a[i]==b[i])
            {
                ans+=a[i];
            }
            else
            {
                break;
            }
            
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}