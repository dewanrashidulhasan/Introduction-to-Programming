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
    int flag =1;
    if (r==c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i==j)
                {
                    // printf("%d ",a[i][j]);
                }
                else
                {
                    if (a[i][j]!=0)
                    {
                        flag =0;
                        printf("This is not a primary diagonal matrix\n");
                    }
                    
                }
                
            }
            
        }
        if (flag ==1)
        {
            printf("This is a primary diagonal matrix");
        }
        
    }
    else
    {
        printf("This is not a primary diagonal matrix\n");
    }
    
    return 0;
}