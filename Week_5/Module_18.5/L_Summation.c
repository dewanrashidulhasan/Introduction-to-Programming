#include<stdio.h>
long long hello(int a[],int n)
{
    if (n==0)
    {
        return 0;
    }
    return a[n-1]+ hello(a,n-1);
    
}
int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    long long sum=hello(a,n);
    printf("%lld",sum);
    return 0;
}