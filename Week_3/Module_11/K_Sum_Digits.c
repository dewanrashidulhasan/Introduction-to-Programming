#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",&a);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum= 0;
    for (int i = 0; i < n; i++)
    {
        int val= a[i]-48;
        sum+=val;
    }
    printf("%d",sum);
    
    return 0;
}