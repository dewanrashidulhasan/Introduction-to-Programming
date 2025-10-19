#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    int indx;
    scanf("%d",&indx);
    for (int i = indx; i <n; i++)
    {
        a[i]= a[i+1];
    }
    n--;
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}