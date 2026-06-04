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
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool ok=true;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if ((a[i]&a[j])!=0)
                {
                    ok=false;
                    break;
                }
                
            }
            
        }
        if (ok)
        {
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
    
    
    return 0;
}