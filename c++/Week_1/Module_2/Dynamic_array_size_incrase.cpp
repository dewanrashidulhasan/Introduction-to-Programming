#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >>n>>m;
    int *a=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int *b=new int[m];
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    b[5]=40;
    b[6]=50;
    delete[] a;
    for (int i = 0; i < m; i++)
    {
        cout <<b[i]<<" ";
    }
    
    return 0;
}