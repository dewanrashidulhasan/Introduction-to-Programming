#include<stdio.h>
int char_to_ascii(char x)
{
    if (x>='a' && x<='z' || 
        x>='A' && x<='Z' || x>='0' && x<='9')
    {
        return x;
    }
    else
    {
        x=-1;
    }
    
    
}
int main()
{   char x;
    scanf("%c",&x);
    if (char_to_ascii(x)!=-1)
    {
        printf("%d",x);
    }
   
    return 0;
}
