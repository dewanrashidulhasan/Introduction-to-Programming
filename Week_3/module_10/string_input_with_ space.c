#include<stdio.h>
#include<string.h>
int main()
{   int n;
    scanf("%d",&n);
    char a[n];
    fgets(a,n,stdin);
    printf("%s\n",a);
    printf("%d\n",a[7]);
    return 0;
}