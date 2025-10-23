#include<stdio.h>
#include<string.h>
int main()
{   char a[1000001];
    scanf("%s",&a);
    int frequency[26] = {0}; 
    for (int  i = 0; a[i]!='\0'; i++)
    {
        int val = a[i]-'a';
        frequency[val]++;
    }
    for (int  i = 0; i <26; i++)
    {
        if (frequency[i]>0)
        {
            printf("%c : %d\n",i+'a',frequency[i]);
        }
        
        
    }
    return 0;
}