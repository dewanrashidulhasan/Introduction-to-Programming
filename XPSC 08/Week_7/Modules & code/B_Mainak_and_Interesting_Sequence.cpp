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
        int n,m;
        cin>>n>>m;
        if (m<n)
        {
            cout<<"No\n";
        }
        else if (n%2==0&&m%2==1)
        {
            cout<<"No\n";
        }
        else if (n%2==1)
        {
            cout<<"Yes\n";
            for (int i = 1; i < n; i++)
            {
                cout<<'1'<<" ";
            }
            cout<<m-n+1<<'\n';
        }
        else
        {
            cout<<"Yes\n";
            for (int i = 1; i <=n-2; i++)
            {
                cout<<1<<" ";
            }
            int x=(m-n+2)/2;
            cout<<x<<" "<<x<<'\n';
        }
    }
    
    return 0;
}