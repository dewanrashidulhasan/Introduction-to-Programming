#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int zero=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            a[zero]=a[i];
            zero++;
        }
        
    }
    while (zero<n)
    {
        a[zero]=0;
        zero++;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}