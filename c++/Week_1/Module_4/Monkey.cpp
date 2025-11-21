#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[100001];
    while (cin.getline(x,100001))
    {
        char spac[100001];
        int i=0,j=0;
        while (x[i])
        {
            if (x[i]!=' ')
            {
                spac[j++]=x[i];
                
            }i++;
            
        }spac[j]='\0';
        
        sort(spac, spac+j);
        cout <<spac<<endl;
    }
    
    return 0;
}
