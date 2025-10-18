#include<stdio.h>
int main()
{   long long int n;
    scanf("%lld",&n);
    int a[n];
    for (long long int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x,v;
    scanf("%d %d",&x,&v);
        
        a[x]=v;
        
    for (long long int i = n-1; i >=0; i--)
    {
        
        printf("%d ",a[i]);
        
        
    }
    return 0;
}