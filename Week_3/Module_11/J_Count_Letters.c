#include<stdio.h>
#include<string.h>
int main()
{   char a[10000005];
    scanf("%s",a);
    int frequency[26] = {0}; 
    for (int  i = 0; a[i]!='\0'; i++)
    {
        if (a[i]>='a'&& a[i]<='z')
        {
        int val = a[i]-'a';
        frequency[val]++;
        }    
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
//https://docs.google.com/document/d/1FLggcwY4YLUkk6RpOWnePSCXBq0iZZdo4tsq6eUXz5s/edit?tab=t.0