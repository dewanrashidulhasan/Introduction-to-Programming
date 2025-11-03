#include<stdio.h>
int sum(int a,int b)
{
    int ans = a+b;
    return ans;
}
int sub(int a,int b)
{
    int ans = a-b;
    return ans;
}
int mult(int a,int b)
{
    int ans = a*b;
    return ans;
}
int dev(int a,int b)
{
    int ans = a/b;
    return ans;
}
int main()
{   int a,b;
    scanf("%d %d",&a,&b);
    int val= sum(a,b);
    int val2 = sub(a,b);
    int val3 =mult(a,b);
    int val4 =dev(a,b);
    printf("%d\n%d\n%d\n%d",val,val2,val3,val4);
    return 0;
}