#include<stdio.h>
long long logg(long long n)
{
    if (n==1)
    {
        return 0;
    }
    else
    {
        return 1+ logg(n/2);
    }
    
}
int main()
{   long long int n;
    scanf("%lld",&n);
    printf("%lld",logg(n));

    return 0;
}