#include<stdio.h>
int small_to_capital_and_capital_to_small(char x)
{
 if (x>='a' && x<='z')
    {
        return x-=32;
    }
    if (x>='A' && x<='Z')
    {
        return x+=32;
    }
    
}

int main()
{   char x;
    scanf("%c",&x);
    printf("%c",small_to_capital_and_capital_to_small(x));
    return 0;
}