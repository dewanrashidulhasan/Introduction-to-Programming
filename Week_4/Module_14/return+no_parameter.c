#include<stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = a+b;
    return ans;
}
int sub()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = a-b;
    return ans;
}
int mult()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = a*b;
    return ans;
}
int dev()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = a/b;
    return ans;
}
int main()
{   
    int val= sum();
    int val2 = sub();
    int val3 =mult();
    int val4 =dev();
    printf("%d\n%d\n%d\n%d",val,val2,val3,val4);
    return 0;
}