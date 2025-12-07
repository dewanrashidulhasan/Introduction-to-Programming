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
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if (a[0]<=d)
            {
                count=0;
            }
            else if (a[i]>d)
            {
                count+=1;
            }
            else if (a[i]<d)
            {
                count+=1;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}
