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
        int zero=0,one=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x==0) zero++;
            else if(x==1) one++;
        }
        if (zero<=(n+1)/2)
        {
            cout<<0<<'\n';
        }
        else if (one==0||n-zero-one>=1)
        {
            cout<<1<<'\n';
        }
        else
        {
            cout<<2<<'\n';
        }
    }
    
    
    return 0;
}