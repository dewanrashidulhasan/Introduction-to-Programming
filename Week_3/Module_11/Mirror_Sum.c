#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n], b[n],ans[n];
    for (int  i = 0; i <n; i++)
    {
        scanf("%d ",&a[i]);
    }
    
    for (int  i = 0; i <n; i++)
    {
        scanf("%d ",&b[i]);
    }
    
    for (int  i = 0; i < n; i++)
    {
        ans[i]= a[i]+b[n-1-i];
    }
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",ans[i]);
    }
    return 0;
}