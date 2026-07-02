#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s(3*n,'0');
        for (int i = 0; i < n; i++)
        {
            int rem=n-i-1,mn=max(0,k-3*rem);
            int x=0;
            if (mn<=1)
            {
                x=min(1,k);
            }
            else
            {
                x=min(3,k);
            }
            for (int j = 0; j < x; j++)
            {
                s[i+j*n]='1';
            }
            k-=x;
        }
        cout<<s<<'\n';
    }
    
    
    return 0;
}