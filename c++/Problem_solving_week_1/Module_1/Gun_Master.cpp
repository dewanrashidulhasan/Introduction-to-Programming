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
        char gun='c';
        for (int i = 0; i < n; i++)
        {
            if (a[i]>d&&gun=='c')
            {
                gun='1';
                gunswitch++;
            }
            else if (a[i]<=d && gun=='1')
            {
                gun='c';
                gunswitch++;
            }
              
        }
        cout<<gunswitch<<endl;
    }
    return 0;
}
