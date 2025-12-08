#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int ammount=0;
        if (2*x>=y)
        {
            ammount=n*x;
        }
        else
        {
            if (n%2==0)
            {
                ammount=(n/2)*y;
            }
            else
            {
                ammount=(n/2)*y+x;
            }
            
        }
        
        cout<<ammount<<endl;
    }
    
    return 0;
}