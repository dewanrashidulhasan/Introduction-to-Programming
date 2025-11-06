#include<stdio.h>
void fun(char s[])
{
    printf("%s",s);
    
}
int main()
{   char s[101];
    scanf("%s",s);
    fun(s);
    return 0;
}