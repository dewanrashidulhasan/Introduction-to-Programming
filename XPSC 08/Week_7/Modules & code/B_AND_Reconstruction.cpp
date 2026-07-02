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
        vector<int> a(n+1),b(n+1);
        bool ok =true;
        for (int i = 1; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 1; i <=n; i++)
        {
            a[i]=b[i-1]|b[i];
        }
        for (int i = 1; i <n; i++)
        {
            if ((a[i]&a[i+1])!=b[i])
            {
                ok=false;
                break;
            }
            
        }
        if (!ok)
        {
            cout<<-1<<'\n';
        }
        else
        {
            for (int i = 1; i <=n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<'\n';
        }
        
    }
    
    
    return 0;
}