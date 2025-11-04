#include<stdio.h>
int small_to_capital_and_capital_to_small()
{   char x;
    scanf("%c",&x);
 if (x>='a' && x<='z')
    {
        return x-=32;
    }
    else if (x>='A' && x<='Z')
    {
        return x+=32;
    }
    
}

int main()
{
    printf("%c",small_to_capital_and_capital_to_small());
    return 0;
}