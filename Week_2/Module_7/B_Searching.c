#include<stdio.h>
int main()
{   int n;
    scanf("%d", &n);
    int arr[n];
    int x;
    for (int i = 0; i <n; i++)
    {   scanf("%d",&x);
        if (x==arr[i])
        {
            printf("%d",i);
            
        }
        
        
    }
    
    return 0;
}