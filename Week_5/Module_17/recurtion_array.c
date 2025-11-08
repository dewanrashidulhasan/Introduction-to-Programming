#include<stdio.h>
void hello(int n,int a[],int i)
{
    if (i==n)
    {
        return;
    }
    
    printf("%d\n",a[i]);
    hello(n,a,i+1);
}
int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    hello(n,a,0);
    return 0;
}