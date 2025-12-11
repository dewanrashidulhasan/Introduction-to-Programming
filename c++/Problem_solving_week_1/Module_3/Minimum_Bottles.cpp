#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    int n,x;
    cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    int need_botlol=(sum+x-1)/x;
    cout<<need_botlol<<endl;
    }
    

    return 0;
}