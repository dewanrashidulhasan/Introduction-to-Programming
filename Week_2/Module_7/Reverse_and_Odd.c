#include<stdio.h>
int main()
{   long long int n;
    scanf("%d",&n);
    int a[n];
    for (long long int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (long long int i = n-1; i >=0; i--)
    {
        if (i%2!=0)
        {
            printf("%d ",a[i]);
        }
        
    }
    return 0;
}