#include<stdio.h>
int count_before_one(int n,int a[])
{
    int count=0;
    for (int i = 0; i<n; i++)
    {
        if (a[i]==1)
        {
            break;
        }
        
        count++;
    }
    return count;
}
int main()
{   int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",count_before_one(n,a));
    return 0;
}