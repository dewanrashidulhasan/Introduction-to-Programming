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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool ok=false;
        for (int i = 0; i+1< n; i++)
        {
            if (a[i]>a[i+1])
            {
                cout<<"YES\n"
                <<2<<'\n'<<a[i]
                <<" "<<a[i+1]<<'\n';
                ok=true;
                break;
            }
            
        }
        if (!ok)
        {
            cout<<"NO\n";
        }
        
    }
    
    
    
    return 0;
}