#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isprime(int n)
{
    if (n==1)
    {
        return false;
    }
    for (int i = 2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    cout<<isprime(n)<<'\n';
    
    
    return 0;
}