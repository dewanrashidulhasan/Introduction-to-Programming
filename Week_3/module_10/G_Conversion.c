#include<stdio.h>
#include<string.h>
int main()
{   char a[100001];
    scanf("%s",&a);
    int length = strlen(a);
    int x;
    for (int i = 0; i < length; i++)
    {
        x =a[i];
        if (x>='a' && x<='z')
        {
            x-=32;
            
        }
        else if (x>='A' && x<='Z')
        {
            x+=32;
            
        }
        else if (x=',')
        {
            x-=12;
        }
        
        printf("%c",x);
    }
    
    return 0;
}