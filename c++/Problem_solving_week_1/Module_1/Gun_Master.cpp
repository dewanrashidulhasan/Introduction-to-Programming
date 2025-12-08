#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int gunswitch=0;
        int currentgun=0;
        for (int i = 0; i < n; i++)
        {
            int needgun=0;
            if (a[i]<=d)
            {
                needgun=0;
            }
            else
            {
                needgun=1;
            }
            if (needgun!=currentgun)
            {
                gunswitch++;
                currentgun=needgun;
            }
            
            
        }
        cout<<gunswitch<<endl;
    }
    return 0;
}
