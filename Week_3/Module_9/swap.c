#include<stdio.h>
int main()
{   int a= 20;
    int b=10;
    int temp=a;
    a=b;
    b=temp;
    printf("a=%d\nb=%d",a,b);
    
    return 0;
}