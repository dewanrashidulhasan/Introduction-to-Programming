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
    for (int  i = 0; i < r; i++)
    {
        
        
        for (int j = 0,k=c-1; j <k; j++,k--)
        {
            int temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
        }
        
    }
    for (int  i = 0; i < r; i++)
    {
        
        
        for (int j = 0; j <c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}