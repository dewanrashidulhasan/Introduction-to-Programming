#include<stdio.h>
int main()
{   long long int n;
    scanf("%lld",&n);
    if (n>0)
    {
        for ( long long i = 1; i <=n; i++)
        {
            printf("%lld ",i);
        }
        
    }
    else if (n<=0)
    {
        for (long long i = n; i <=0; i++)
        {
            printf("%lld ",i);
        }
        
    }
    
    
    
    return 0;
}