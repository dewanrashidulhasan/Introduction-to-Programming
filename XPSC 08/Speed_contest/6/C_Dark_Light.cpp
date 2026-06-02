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
        ll n,k;
        cin>>n>>k;
        ll level=n%4;
        if (k==0)
        {
            if (level==0)
            {
                cout<<"Off\n";
            }
            else
            {
                cout<<"On\n";
            }
            
            
        }
        else
        {
            if (level==0)
            {
                cout<<"On\n";
            }
            else
            {
                cout<<"Ambiguous\n";
            }
        }
        

    }
    
    
    return 0;
}