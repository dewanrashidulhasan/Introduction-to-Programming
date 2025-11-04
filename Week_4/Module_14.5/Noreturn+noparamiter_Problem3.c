#include<stdio.h>
void char_to_ascii()
{   char x;
    scanf("%c",&x);
    if (x>='a' && x<='z' || 
        x>='A' && x<='Z' ||
         x>='0' && x<='9')
    {
        printf("%d",x);
    }   
}
int main()
{
    char_to_ascii();
    return 0;
}
