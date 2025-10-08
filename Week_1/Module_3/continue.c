// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <=10; i++)
//     {
//         if(i==5)
//         {
//             continue;
//         }
//         printf("%d\n",i);
//     }
    
// }


#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        if(i%2==1)
        {
            continue;
        }
        printf("%d\n",i);
    }
    
}