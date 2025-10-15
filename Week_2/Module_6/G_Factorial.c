#include<stdio.h>
int main()
{   int t,n;
    scanf("%d",&t);
    for (int i = 1; i <=t; i++)
    {   long long int fact=1;
        scanf("%lld",&n);
        for (int i = 1; i <=n; i++)
        {
            
            fact = fact*i;
            
        }printf("%lld\n",fact);  
    }
    return 0;
}
