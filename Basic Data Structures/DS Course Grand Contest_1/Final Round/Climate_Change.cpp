#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long > v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<long long > presum(n);
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=v[i];
        presum[i]=sum;
    }
    
    int cnt=0;
    if (sum%2!=0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        long long tergate= sum/2;
        long long prefix=0;
        for (int i = 0; i <n-1; i++)
        {
            prefix+=v[i];
            if (prefix==tergate)
            {
                cnt++;
            }
            
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}