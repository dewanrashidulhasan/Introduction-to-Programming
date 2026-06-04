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
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        bool ok=false;
        for (int i = 0; i < n; i++)
        {
            if (a[i]%2==sum%2)
            {
                ok=true;
                break;
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