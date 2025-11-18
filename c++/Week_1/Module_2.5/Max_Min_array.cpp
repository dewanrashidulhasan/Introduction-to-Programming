#include<bits/stdc++.h>
using namespace std;
int max_min(int n,int &mx, int &mn)
{
    
    int *a=new int[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    mx=INT_MIN,mn=INT_MAX;
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
    delete[] a;
}
int main()
{
    int n;
    cin >>n;
    int mx,mn;
    max_min(n,mx,mn);
    cout<<mn<<" "<<mx<<endl;
    return 0;
}