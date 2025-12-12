#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int mxval= a[0];
    int mxcount=1;
    int currentval=a[0];
    int currentcount=1;
    for (int i = 1; i < n; i++)
    {
        if (a[i]==currentval)
        {
            currentcount++;
        }
        else
        {
            if (currentcount>mxcount)
            {
                mxcount=currentcount;
                mxval=currentval;
            }
            currentval=a[i];
            currentcount=1;
        }
        
    }
    if (currentcount>mxcount)
    {
            mxcount=currentcount;
            mxval=currentval;
    }
    cout<<mxval<<" "<<mxcount<<endl;
    delete[]a;
    return 0;
}