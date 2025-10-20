// #include<stdio.h>
// int main()
// {   int n;
//     scanf("%d",&n);
//     char a[n];
//     for (int i = 0; i <n; i++)
//     {
//         scanf(" %c",&a[i]);
//     }
//     for (int i = 0; i <n; i++)
//     {
//         printf("%d = %c\n",i,a[i]);
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);
    printf("%s\n",a);
    printf("%d\n",a[7]);
    return 0;
}