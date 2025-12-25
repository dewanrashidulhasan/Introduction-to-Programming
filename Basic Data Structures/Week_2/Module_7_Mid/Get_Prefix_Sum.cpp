#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;   
    vector<long long int> v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    vector<long long int> presum(n);
    long long int sum=0;
    for (int i = 0; i <n; i++)
    {
        sum+=v[i];
        presum[i]=sum;
    }
    for (int i = n-1; i >=0; i--)
    {
        cout<<presum[i]<<" ";
    }
    
    return 0;
}