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
    int mx=INT_MIN,mn=INT_MAX;
    for (int  i = 0,j=n-1; i <=j; i++,j--)
    {
        mn=min(mn,a[i]);   
        mx=max(mx,a[i]);  
        if (i!=j)
        {
            mn=min(mn,a[j]); 
            mx=max(mx,a[j]);   
    
        } 
    }
    cout<<mn<<" "<<mx<<endl;
    delete[] a;
    return 0;
}