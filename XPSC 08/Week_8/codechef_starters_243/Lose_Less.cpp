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
        int m,n;
        cin>>m>>n;
        int loss;
        if (n<=m)
        {
            loss=m-n;
        }
        else
        {
            int extra=n-m;
            int win=(extra+1)/2;
            int draw=n-3*win;
            loss=m-(win+draw);
        }
        cout<<loss<<'\n';
    }
    
    
    
    return 0;
}