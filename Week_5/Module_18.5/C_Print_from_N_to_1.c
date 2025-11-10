#include<stdio.h>
void one_to_n(int n,int val)
{
    
    if (val==n)
    {
        return;
    }
    
    val+=1;
    one_to_n(n,val);
    printf("%d",val);
    if (val>1)
    {
        printf(" ");
    }
    
}
int main()
{   int n;
    scanf("%d",&n);
    one_to_n(n,0);
    return 0;
}