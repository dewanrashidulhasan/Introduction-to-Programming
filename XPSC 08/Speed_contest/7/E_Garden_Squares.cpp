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
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                int r=n-i,c=k-j;
                int mx=min(r,c)-1;
                for (int l = 1; l <=mx; l++)
                {
                    char ch=a[i][j];
                    if (a[i][j+l]==ch&&a[i+l][j]==ch&&a[i+l][j+l]==ch)
                    {
                        ans++;
                    }
                    
                }
                
            }
            
        }
        cout<<ans<<'\n';
    }
    
    
    return 0;
}