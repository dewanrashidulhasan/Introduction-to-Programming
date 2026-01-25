#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    cout<<i;
    cout<<endl;

    for (int i = 2; i <=n-1; i++)
    {
        cout<<i;
        int s = 1;
        while (s<=n-2)
        {
            cout<<" ";
            s++;
        }
        cout<<(n-i+1)<<endl;
    }
    
    if (n>1)
    {
        int i=n;
        while (i>=1)
        {
            cout<<i;
            i--;
        }
        
    }
    
    
    return 0;
}