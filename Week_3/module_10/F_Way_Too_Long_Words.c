#include<stdio.h>
#include<string.h>
int main()
{   
    int n;
    scanf("%d",&n);
    for (int  i = 0; i <n; i++)
    {
        char a[101];
    scanf("%s",&a);
    int length= strlen(a);
    if (length<=10)
    {
        printf("%s\n",a);
    }
    else if (length>10)
    {
        printf("%c%d%c\n",a[0],length-2,a[length-1]);
    }
    
    }
    
    
}