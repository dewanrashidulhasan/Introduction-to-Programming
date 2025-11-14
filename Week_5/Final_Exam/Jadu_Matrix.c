#include<stdio.h>
#include<stdlib.h>
int main()
{   int r,c;
    scanf("%d %d",&r,&c);
    if (r!=c)
    {
        printf("NO\n");
        return 0;
    }
    int a[r][c];
    for (int  i = 0; i < r; i++)
    {
        
        for (int j = 0; j <c; j++)
        {
            scanf("%d",&a[i][j]);
            
        }

    }
    int flag=1;
    
    
        for (int  i = 0; i < r; i++)
        {
        for (int j = 0; j <c; j++)
        {
            if (i==j||i+j==r-1)
            {
                if (a[i][j]!=1)
                {
                    flag=0;
                    break;
                }
                
                
                
            }
            else
            {
                if (a[i][j]!=0)
                {
                    flag=0;
                    break;
                }
            }
            
            
        }
        
        }
        
        if (flag==1)
        {
            printf("YES");
        }
        
        
    
    else
    {
        printf("NO");
    }
    return 0;
}