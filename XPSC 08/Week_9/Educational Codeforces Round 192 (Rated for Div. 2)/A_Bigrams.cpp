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
        int k;
        cin>>k;
        int two=0,three=0;
        for (int i = 0; i < k; i++)
        {
            ll x;
            cin>>x;
            if (x>=3)
            {
                three=1;
            }
            if (x>=2)
            {
                two++;
            }
            
        }
        if (three||two>1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    
    
    return 0;
}