#include<stdio.h>
int x= 10;//global variable
int sum()
{
    printf("sum -> %d\n",x);
}
int main()
{   
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d",i);
    }
    printf("%d",i);
    sum();
    return 0;
}