#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        string s;
        cin>>n>>s;
        long long operation=0;
        while (n>0)
        {
            operation++;
            n/=2;
        }
        cout<<operation<<endl;
        
    }
    
    return 0;
}