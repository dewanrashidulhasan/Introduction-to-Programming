#include<stdio.h>
void sum(int a, int b)
{
    int summ=a+b;
    printf("%d",summ);
}
int main()
{   int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}