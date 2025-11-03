#include<stdio.h>
#include<math.h>
int main()
{   int ans=ceil(4.3);
    int ans2=floor(4.3);
    int ans3=round(4.4555);
    int ans4=sqrt(25);
    double ans5=sqrt(20);
    int ans6=pow(2,3);
    printf("%d\n%d\n%d\n%d\n%lf\n%d"
        ,ans,ans2,ans3,ans4,ans5,ans6);
    return 0;
}