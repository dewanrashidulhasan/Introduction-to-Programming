#include<stdio.h>
#include<string.h>
int main()
{   char s;
    scanf("%s",&s);
    int length = strlen(s);
    int charecter;
    for (int  i = 0; i < length; i++)
    {
        charecter= s[i];
        for (int  i = 0,j=length-1; i <j; i++,j--)
        {
            int temp= s[i];
        s[i]= s[j];
        s[j] =temp;
        }
    }

    }
    

    return 0;
}