#include<bits/stdc++.h>
using namespace std;
int fmax(int &n)
{
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
    
    delete[] a;
    return mx;
}

int main()
{
    int n;
    int mx= fmax(n);
    cout<<mx<<endl;
    return 0;
}