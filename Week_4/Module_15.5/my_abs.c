#include<stdio.h>
#include<stdlib.h>
int my_abs(int n)
{
    int abs_n=abs(n);
    return abs_n;
}
int main()
{   int n;
    scanf("%d",&n);
    printf("%d",my_abs(n));
    return 0;
}