#include<stdio.h>
int main()
{   long long int n;
    scanf("%lld",&n);
    int a[n];
    for (long long int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    long long int sum =0;
    long long int summ=0;
    for (long long int i = 0; i <n; i++)
    {
        if (a[i]>0)
        {
            sum=sum+a[i];
        }
        
        if (a[i]<0)
        {
            summ=summ+a[i];
        }
    }printf("%lld %lld",sum, summ);
    return 0;
}