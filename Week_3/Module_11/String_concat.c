// #include<stdio.h>
// #include<string.h>
// int main()
// {   char a[101], b[101];
//     scanf("%s %s",&a,&b);
//     int length =strlen(a);
//     int lengths =strlen(b);
//     for (int  i = 0; i <=lengths; i++)
//     {
//         a[i+length]=b[i];
//     }
    
//     printf("%s %s",a,b);
//     return 0;
// }




#include<stdio.h>
#include<string.h>
int main()
{   char a[101], b[101];
    scanf("%s %s",&a,&b);
    strcat(a,b);
    printf("%s %s",a,b);
    return 0;
}
