#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int frequency[6]= {0};
    for (int  i = 0; i < n; i++)
    {
        int val= a[i];
        frequency[val]++;
    }
    for (int  i = 0; i <6 ; i++)
    {
        printf("%d count: %d\n",i,frequency[i]);
    }
    return 0;
}