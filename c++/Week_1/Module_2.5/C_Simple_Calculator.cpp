#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int sum= n+m;
    long long int mult= n*m;
    long long int div= n-m;
    cout<<n<<" + "<<m<<" = "<<sum<<endl;
    cout<<n<<" * "<<m<<" = "<<mult<<endl;
    cout<<n<<" - "<<m<<" = "<<div<<endl;
    return 0;
}
