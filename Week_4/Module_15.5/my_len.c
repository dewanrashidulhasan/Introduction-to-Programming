#include<stdio.h>
#include<string.h>
int my_len(char a[])
{
 int count=0;
 for (int i = 0; a[i]!='\0'; i++)
 {
    count++;
 }
 return count;
}
int main()
{   char a[101];
    scanf("%s",a);
    printf("%d",my_len(a));
    return 0;
}