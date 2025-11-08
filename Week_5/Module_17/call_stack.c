#include<stdio.h>
void mello()
{
    printf("mello\n");
}
void gello()
{
    
    printf("gello\n");
    mello();
}
void hello()
{
    
    printf("hello\n");
    gello();
}
int main()
{   printf("hi\n");
    hello();
    
    return 0;
}