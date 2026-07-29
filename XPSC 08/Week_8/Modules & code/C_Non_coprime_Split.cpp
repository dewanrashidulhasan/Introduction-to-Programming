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
        int l,r;
        cin>>l>>r;
        int flag=0;
        for (int i = l; i <=r; i++)
        {
            for (int j = 2; j*j<=i; j++)
            {
                if (i%j==0)
                {
                    cout<<j<<' '<<i-j<<'\n';
                    flag=1;
                    break;
                }
                
            }
            if (flag)
            {
                break;
            }
            
        }
        if (flag==0)
        {
            cout<<-1<<'\n';
        }
        
    }
    
    
    return 0;
}