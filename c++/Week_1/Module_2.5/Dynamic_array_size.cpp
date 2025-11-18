#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int *a=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >>m;
    int *b=new int[n+m];//2 ta array jog korlam
    for (int i = 0; i < m; i++)
    {
        b[i]=a[i];

    }
    //notun m input nese ta jog kori
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        b[n+i]=x;
    }
    
    delete[] a;
    for (int i = 0; i < m; i++)
    {
        cout <<b[i]<<" ";
    }
    delete[] b;
    return 0;
}