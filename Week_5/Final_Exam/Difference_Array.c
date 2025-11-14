#include<stdio.h>
#include<stdlib.h>
int difference(const void *a , const void *b)
{
    return(*(int*)a-*(int*)b);

}
int main()
{   int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);

        int a[n],b[n],c[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);

            b[i] =a[i];
        }

        qsort(b,n,sizeof(int), difference);
         
        for (int i = 0; i < n; i++)
        {
            c[i]= abs(a[i]-b[i]);
        }
        
        for (int  i = 0; i < n; i++)
        {
            printf("%d",c[i]);
            if (i!=n-1)
            {
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
    return 0;
}

