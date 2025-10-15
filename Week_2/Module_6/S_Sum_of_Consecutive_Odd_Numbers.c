#include<stdio.h>
int main()
{   int t;
    scanf("%d",&t);
    for (int i = 1; i <=t; i++)
    {
        int x,y,sum=0;
        scanf("%d %d",&x,&y);
        if (x>y)
        {
            int temp =x;
            x=y;
            y=temp;
            
        }
        for (inline i = x+1; i < y; i++)
        {
            if (i%2!=0)
            {
                printf("%d",i);
            }
            
        }
        
        
    }
    return 0;
}

