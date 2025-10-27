#include<stdio.h>
int main()
{   char s[100001];
    scanf("%s",s);
    int frequency[26] = {0}; 
    for (int  i = 0; s[i]!='\0'; i++)
    {
        
        if (s[i]>='a' && s[i]<='z' && s[i]!='a' && 
            s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')

        {
            int val =s[i]-'a';
            frequency[val]++;
        }
        
    }
    int sum =0;
    for (int  i = 0; i < 26; i++)
    {
        if (frequency[i]>0)
        {
            sum= sum +frequency[i];
        }
       
        
    }
     printf("%d",sum);
    return 0;
}