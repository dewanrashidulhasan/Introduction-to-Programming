#include<stdio.h>
#include<string.h>
int main()
{   
    char a[22];
    fgets(a,21,stdin);
    printf("%s",a);
    return 0;
}