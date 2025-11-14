#include<stdio.h>
#include<stdlib.h>
int main()
{   int n;
    scanf("%d",&n);
    long long int a[n][4];
    for (int  i = 0; i < n; i++)
    {
        
        
        for (int j = 0; j <4; j++)
        {
            scanf("%lld",&a[i][j]);
            
        }
        
    }
    
    for (int  i = 0; i < n; i++)
    {
            long long A=a[i][0];
            long long B=a[i][1];
            long long C=a[i][2];
            long long D=a[i][3];
            if (A==0||B==0||C==0||D==0)
            {
                printf("0\n");
                continue;
            }
            else if (A%(B*C*D)==0)
            {
                long long int x=A/(B*C*D);
                printf("%lld\n",x);
                continue;
            }
            else
            {
                printf("-1\n");
                continue;
            }
            
        
    }
    
    
    return 0;
}