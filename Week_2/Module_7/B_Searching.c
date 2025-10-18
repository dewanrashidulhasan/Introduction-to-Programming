#include<stdio.h>
int main()
{   int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  
    }
    int x;
    int found =0;
    for (int i = 0; i <n; i++)
    {   scanf("%d",&x);
        if (x==arr[i])
        {
            printf("%d",i);
            found =1;
             break;  
        }  
    }
    if (found!=1)
    {
        printf("-1");
    }
    
    
    return 0;
}