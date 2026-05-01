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
        string a,b,c;
        cin>>a>>b>>c;
        bool found=false;
        for (int i = 0; i < n; i++)
        {
            if (c[i]!=a[i]&&c[i]!=b[i])
            {
                found=true;
                break;
            }
            
        }
        if (found) cout<<"YES\n";
        else cout<<"NO\n";
        
        
    }
    
    
    return 0;
}