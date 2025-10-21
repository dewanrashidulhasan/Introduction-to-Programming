#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    long long int a[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
    
    int same =1;
    for (int  i = 0, j=n-1; i<j; i++, j--)
    {
        if (a[i]!=a[j])
        {
            same =0;
            break;
        }
        

    
    }
    
    if (same)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
     
     
    return 0;
}