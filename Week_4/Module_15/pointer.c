#include<stdio.h>
int main()
{   int n,m;
    scanf("%d %d",&n,&m);
    printf("%d\n",n);
    printf("%p\n",&n);

    int* ptr;
    ptr= &n;
    *ptr=m;
    // printf("%p\n",ptr);
    // printf("%p\n",&ptr);
    // printf("%d\n",*ptr);
    printf("%d\n",n);
    return 0;
}