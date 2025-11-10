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
    if (r==1)
    {
        printf("This is a row matrix");
    }
    else if (c==1)
    {
        printf("This is a column matrix");
    }
    else if (r==c)
    {
        printf("This is a Square matrix");
    }
    else
    {
        printf("This is a rectungular matrix");
    }
    
    return 0;
}
