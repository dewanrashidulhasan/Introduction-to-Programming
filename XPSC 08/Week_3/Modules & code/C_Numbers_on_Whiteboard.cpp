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
        cout<<2<<'\n';
        int val=n;
        for (int i = n-1; i >=1; --i)
        {
            cout<<val<<" "<<i<<'\n';
            val=(val+i+1)/2;
        }
        
    }
    
    
    return 0;
}