#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int *a=new int[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int mx=INT_MIN;
    for (int  i = 0,j=n-1; i <=j; i++,j--)
    {
        mx=max(mx,a[i]);   
        mx=max(mx,a[j]);   
    }
    cout<<mx<<endl;
    delete[] a;
    return 0;
}