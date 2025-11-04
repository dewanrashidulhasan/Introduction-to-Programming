#include<stdio.h>
void char_to_ascii(char x)
{
    if (x>='a' && x<='z' || 
        x>='A' && x<='Z' ||
         x>='0' && x<='9')
    {
        printf("%d",x);
    }
    
    
}
int main()
{   char x;
    scanf("%c",&x);
    char_to_ascii(x);
    return 0;
}
