#include<stdio.h>
#include<stdlib.h>
int main()
{   int r=5,c=5;
    
    int a[r][c];
    for (int  i = 0; i < r; i++)
    {
        
        
        for (int j = 0; j <c; j++)
        {
            scanf("%d",&a[i][j]);
            
        }
        
    }
    int move=0;
    for (int  i = 0; i < r; i++)
    {
        
        
        for (int j = 0; j <c; j++)
        {
            if (a[i][j]==1)
            {
               move=abs(2-i)+abs(2-j); 
            }
        }
        
    }
    printf("%d",move);
    return 0;
}