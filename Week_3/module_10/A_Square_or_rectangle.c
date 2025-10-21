#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int w,h;
    for (int  i = 1; i <=n; i++)
    {
        scanf("%d %d",&w,&h);
        if (w==h)
        {
            printf("Square\n");
        }
        else if (w!=h)
        {
            printf("Rectangle\n");
        }
        
        
    }
    
    return 0;
}