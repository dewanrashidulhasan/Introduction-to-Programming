#include<stdio.h>
#include<stdlib.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n][n];
    for (int  i = 0; i < n; i++)
    {
        
        
        for (int j = 0; j <n; j++)
        {
            scanf("%d",&a[i][j]);
            
        }
        
    }
    int primary_val=0;
    for (int  i = 0; i < n; i++)
    {
        
        
        for (int j = 0; j <n; j++)
        {
           if (i==j)
           {
             primary_val+=a[i][j];
           }
           
            
        }
        
    }
    int secondary_val=0;
    for (int  i = 0; i < n; i++)
    {
        
        
        for (int j = 0; j <n; j++)
        {
           if (i+j==n-1)
           {
             secondary_val+=a[i][j];
           }
           
            
        }
        
    }
    int sum_p_s=abs(primary_val-secondary_val);
    printf("%d",sum_p_s);
    return 0;
}