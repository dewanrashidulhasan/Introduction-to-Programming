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
        if (n%3!=2)
        {
            cout<<-1<<'\n';
            continue;
        }
        for (int i = 1; i <=n; i++)
        {
            ll val=0;
            int pos=i%6;
            if (pos==1||pos==2)
            {
                val=1;
            }
            else if (pos==4||pos==5)
            {
                val=m-1;
            }
            else
            {
                val=0;
            }
            cout<<val;
            if (i==n)
            {
                cout<<'\n';
            }
            else cout<<" ";
        }
        
    }
    
    
    return 0;
}