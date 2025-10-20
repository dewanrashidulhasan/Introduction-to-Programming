#include<stdio.h>
#include<limits.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min=INT_MAX,max=INT_MIN;
    for (int i = 1; i <=n; i++)
    {
        int val;
        scanf("%d",&val);
        if (max<val)
        {
            max=val;
        }
    }printf("%d ",max);
     for (int i = 0; i < n; i++)
    {
        int vaal;
        scanf("%d",&vaal);
        if (min>vaal)
        {
            min=vaal;
        }
    }
    
    printf("%d ",min);
    
    return 0;
}