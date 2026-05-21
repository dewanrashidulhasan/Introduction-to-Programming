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
        bool ok=true;
        int pair=n/2;
        int sum=a[0]+a[n-1];
        for (int i = 1; i < pair; i++)
        {
            if (a[i]+a[n-1-i]!=sum)
            {
                ok=false;
                break;
            }
            
        }
        if (ok)
        {
            cout<<"Yes"<<'\n';
        }
        else
        {
            cout<<"No"<<'\n';
        }
        

    }
    
    
    return 0;
}