#include<stdio.h>
#include<string.h>
int main()
{   char a[1000], b[1000];
    scanf("%s %s", &a, &b);
    int length = strlen(a);
    int lengths = strlen(b);
    for (int i = 0; i < length; i++)
    {
        
    }
     for (int i = 0; i < lengths; i++)
    {
        
    }
    printf("%d %d\n",length,lengths);
    printf("%s",a);
    printf("%s\n",b);

    char temp =a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%s %s",a,b);
    return 0;
}
