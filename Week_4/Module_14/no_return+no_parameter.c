#include<stdio.h>
void sum()
{   int a,b;
    scanf("%d %d",&a,&b);
    int ans = a+b;
    printf("%d\n",ans);
}
void sub()
{   int a,b;
    scanf("%d %d",&a,&b);
    int ans = a-b;
    printf("%d\n",ans);
}
void mult()
{   int a,b;
    scanf("%d %d",&a,&b);
    int ans = a*b;
    printf("%d\n",ans);
}
void dev()
{   int a,b;
    scanf("%d %d",&a,&b);
    int ans = a/b;
    printf("%d\n",ans);
}
int main()
{
    sum();
    sub();
    mult();
    dev();
    return 0;
}