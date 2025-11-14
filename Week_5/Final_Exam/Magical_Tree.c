#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int high =n+5;
    for (int  i = 1; i <=high; i++)
    {
        int space=high-i;
        int stars=2*i-n;
        if (stars>0)
        {
            for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        printf("\n");
        }
        
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("     ");
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
       printf("\n"); 
    }
    
    
    return 0;
}