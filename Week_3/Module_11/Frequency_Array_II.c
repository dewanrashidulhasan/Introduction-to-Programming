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
        if (a[i]==0)
        {
            frequency[0]++;
        }
        else if (a[i]==1)
        {
            frequency[1]++;
        }
        else if (a[i]==2)
        {
            frequency[2]++;
        }
        else if (a[i]==3)
        {
            frequency[3]++;
        }
        else if (a[i]==4)
        {
            frequency[4]++;
        }
        else if (a[i]==5)
        {
            frequency[5]++;
        }
    }
    printf("0 count: %d\n1 count: %d\n2 count: %d\n3 count: %d\n4 count: %d\n5 count: %d",frequency[0],frequency[1],frequency[2],frequency[3],frequency[4],frequency[5]);
    return 0;
}