#include<stdio.h>
int main()
{   int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for (int  i = 0; i < r; i++)
    {
        
        
        for (int j = 0; j <c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    int absulate_value,flag=0;
    scanf("%d",&absulate_value);
    for (int  i = 0; i < r; i++)
    {
        
        
        for (int j = 0; j <c; j++)
        {
            if (absulate_value==a[i][j])
            {
                
               flag=1; 
            }
            
        }
        if (flag==1)
        {
            break;
        }
        
    }
    if (flag==1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    
    
    return 0;
}