#include<stdio.h>

void hello()
{
    
    printf("hello\n");
    hello();
}
int main()
{   printf("hi\n");
    hello();
    
    return 0;
}