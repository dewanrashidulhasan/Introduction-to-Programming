#include<stdio.h>
#include<string.h>
int main()
{   char s[1001];
    scanf("%s",&s);
    int length = strlen(s);
    int is_palindrome = 1;
    for (int i = 0, j = length-1; i<j; i++, j--)
    {
        if (s[i]!=s[j])
        {
            is_palindrome=0;
            break;
        }    
    }
    if (is_palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}