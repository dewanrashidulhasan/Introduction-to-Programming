#include<stdio.h>
int sum(int num1,int num2)
{
    int ans = num1+num2;
    return ans;
}
int sub(int num1,int num2)
{
    int ans = num1-num2;
    return ans;
}
int mult(int num1,int num2)
{
    int ans = num1*num2;
    return ans;
}
int main()
{   int a,b;
    scanf("%d %d",&a,&b);
    int val= sum(a,b);
    int val2 = sub(a,b);
    int val3 =mult(a,b);
    printf("%d\n%d\n%d",val,val2,val3);
    return 0;
}