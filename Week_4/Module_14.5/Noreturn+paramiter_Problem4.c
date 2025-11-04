#include<stdio.h>
void small_to_capital_and_capital_to_small(char x)
{
    if (x>='a' && x<='z')
    {
        x-=32;
        printf("%c",x);
    }
    else if (x>='A' && x<='Z')
    {
        x+=32;
        printf("%c",x);
    }
    
}

int main()
{   char x;
    scanf("%c",&x);
    small_to_capital_and_capital_to_small(x);
    return 0;
}