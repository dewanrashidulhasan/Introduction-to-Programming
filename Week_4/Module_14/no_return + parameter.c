#include<stdio.h>
void sum(int a,int b)
{
    int ans = a+b;
    printf("%d\n",ans);
}
void sub(int a,int b)
{
    int ans = a-b;
    printf("%d\n",ans);
}
void mult(int a,int b)
{
    int ans = a*b;
    printf("%d\n",ans);
}
void dev(int a,int b)
{
    int ans = a/b;
    printf("%d\n",ans);
}
int main()
{   int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    sub(a,b);
    mult(a,b);
    dev(a,b);
    return 0;
}