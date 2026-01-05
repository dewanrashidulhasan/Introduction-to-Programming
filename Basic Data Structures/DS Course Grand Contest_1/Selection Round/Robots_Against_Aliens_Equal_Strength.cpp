#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    long long int mainSum=-1;
    bool possible=true;
    for (int i = 0; i < r; i++)
    {
        long long int rowsum =0;
        bool zero=false;

        for (int j = 0; j < c; j++)
        {
            int x;
            cin>>x;
            if (x==0)
            {
                zero=true;
            }
            rowsum+=x;
        }
        if (!zero)
        {
            if (mainSum==-1)
            {
                mainSum=rowsum;
            }
            else if (rowsum!=mainSum)
            {
                possible=false;
            }
            
            
        }
        
    }
    if (possible)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}