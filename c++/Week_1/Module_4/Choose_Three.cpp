#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sum;
        cin>>n>>sum;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        int flag=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    if (a[i]+a[j]+a[k]==sum)
                    {
                        flag=0;
                        break;
                    }
                    
                }
                if (flag==0)
                {
                    break;
                }
                
            }
            if (flag==0)
                {
                    break;
                }
                
        }
        if (flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
    
    return 0;
}

