#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long protijon_pabe=k/n;
    long long baki_thakbe=k%n;
    cout<<protijon_pabe<<" "<<baki_thakbe;
    return 0;
}