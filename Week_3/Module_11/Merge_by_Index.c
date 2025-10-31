#include<stdio.h>
#include<string.h>
int main()
{   char a[1001], b[1001];
    scanf("%s %s", a, b);
    int n,m;
    scanf("%d %d", &n,&m);
    int length = strlen(a);
    int lengths= length;
    for (int  i = n; i <=m; i++)
    {
        a[lengths]= b[i];
        lengths++;
    }
    a[lengths]='\0';
    printf("%s",a);
    return 0;
}