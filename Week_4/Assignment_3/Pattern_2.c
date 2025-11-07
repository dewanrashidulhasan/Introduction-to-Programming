#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int space=n-1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = i; j >=1; j--)
        {
            printf("%d",j);
        }
       printf("\n"); 
       space--;
    }
    
    
    return 0;
}