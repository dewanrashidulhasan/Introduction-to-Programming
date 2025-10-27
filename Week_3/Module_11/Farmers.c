#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int work=0, total_workers=0,new_days=0,total_save_days=0;
    for (int  i = 0; i < n; i++)
    {
        int w1,w2,d;
        scanf("%d %d %d",&w1,&w2,&d);
        work= w1*d;
        total_workers= w1+w2;
        new_days=work/total_workers;
        total_save_days=d-new_days;
        printf("%d\n",total_save_days);
    }
    
    return 0;
}