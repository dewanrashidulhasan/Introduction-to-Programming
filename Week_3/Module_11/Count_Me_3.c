#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    for (int  i = 0;i < n; i++)
    {
        char s[10001];
        scanf("%s",s);
        int sums =0,sumb=0, sumn=0;
        for (int  i = 0; s[i]!='\0'; i++)
        {
           if (s[i]>='A' && s[i]<='Z')

        {
            sumb++;
        }
        if (s[i]>='a' && s[i]<='z')

        {
           sums++;
        }
        if (s[i]>='0' && s[i]<='9')

        {
           sumn++;
        }
        }printf("%d %d %d\n",sumb,sums,sumn);
     
        
    }
    return 0;
}