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
    int ans= sum(a,b);
    int ans2 = sub(a,b);
    int ans3 =mult(a,b);
    int ans4 =dev(a,b);
    printf("%d\n%d\n%d\n%d",ans,ans2,ans3,ans4);
    return 0;
}