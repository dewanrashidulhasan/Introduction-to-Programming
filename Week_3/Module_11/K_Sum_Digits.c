#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    char a[n+1];
    scanf("%s",&a);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum= 0;
    for (int i = 0; i < n; i++)
    {
        int val= a[i]-48;
        sum+=val;
    }
    printf("%d",sum);
    
    return 0;
}
//https://docs.google.com/document/d/1FLggcwY4YLUkk6RpOWnePSCXBq0iZZdo4tsq6eUXz5s/edit?tab=t.0