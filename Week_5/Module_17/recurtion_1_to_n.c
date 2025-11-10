// #include<stdio.h>
// void hello(int n)
// {
//     if (n==6)
//     {
//         return;
//     }
    
//     printf("%d\n",n);
//     n+=1;
//     hello(n);
// }
// int main()
// {   int n;
//     scanf("%d",&n);
//     hello(n);
    
//     return 0;
// }


#include<stdio.h>
void hello(int n, int m)
{
    if (n==m)
    {
        return;
    }
    printf("%d\n",n);
    n+=1;
    hello(n,m);
    
}
int main()
{   int n,m;
    scanf("%d %d",&n,&m);
    hello(n,m);
    
    return 0;
}