#include<stdio.h>
void s(int a, int b, int c)
{
    int max=a,mid,min=a;
    if (b>max)
    {
        max=b;
    }
    if (c>max)
    {
        max=c;
    }
    if (b<min)
    {
        min=b;
    }
    if (c<min)
    {
        min=c;
    }
    mid= (a+b+c)-(max+min);
    printf("%d\n%d\n%d\n\n%d\n%d\n%d", min, mid, max, a, b, c);
}
int main()
{   int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    s(a,b,c);
    
    return 0;
}