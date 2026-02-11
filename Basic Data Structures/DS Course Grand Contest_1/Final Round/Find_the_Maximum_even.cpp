#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long mx=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
            mx=a[i];
            
    }
    long long mx2=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1;j < n; j++)
        {
            long long sum=a[i]+a[j];
            if(sum%2==0&&mx<sum)
                mx2=sum;
        }
    }
    cout<<max(mx,mx2)<<endl;
    return 0;
}