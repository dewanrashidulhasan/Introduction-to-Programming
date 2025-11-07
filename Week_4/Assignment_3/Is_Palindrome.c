#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    int length= strlen(s);
    int is_palindrom=1;
    for (int i = 0,j=length-1; i <j; i++,j--)
    {
        if (s[i]!=s[j])
        {
            is_palindrom=0;
            break;
        }
        
    }
    return is_palindrom;
}
int main()
{   char s[1001];
    scanf("%s",s);
    if (is_palindrome(s))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    return 0;
}