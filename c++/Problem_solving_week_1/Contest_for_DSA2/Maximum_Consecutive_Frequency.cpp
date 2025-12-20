#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int fre=1,max_fre=1,num;
    for (int i = 1; i < n; i++)
    {
        if (a[i]==a[i-1])
        {
            fre++;
            if (fre>max_fre)
            {
                max_fre=fre;
                num=a[i];
            }
            
        }
        else
        {
            fre=1;
        }
         
    }
   cout<<num<<" "<<max_fre<<endl;
    return 0;
}