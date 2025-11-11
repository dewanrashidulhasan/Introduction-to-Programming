#include<stdio.h>
void recurtion(int n)
{
   if (n==0)
   {
    return;
   }
   
    int last =n%10;
    recurtion(n/10);
    printf("%d ",last);
}
int main()
{   
    int testcase;
    scanf("%d",&testcase);
    for (int i = 0; i < testcase; i++)
    {
        int n;
        scanf("%d",&n);
        if (n==0)
        {
            printf("0");
        }
        
        recurtion(n);
        printf("\n");
    }
     
    
    
    return 0;
}