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
        for (int i = 0; i < n; i++)
        {
            if (i==0||i==n-1)
            {
                cout<<'0';
            }
            else
            {
                cout<<'1';
            }
            
        }
        cout<<'\n';
    }
    
    
    return 0;
}