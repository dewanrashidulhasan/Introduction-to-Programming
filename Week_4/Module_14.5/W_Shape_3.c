#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int star =1,space=n-1;
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
        
    }
    star -=2,space=0;
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");
        star-=2;
        space++;
        
    }
    
    return 0;
}