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
        int n;
        cin>>n;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            sum+=val;
        }
        if (sum>=(n+1)/2)
        {
            cout<<"Bessie\n";
        }
        else
        {
            cout<<"Elsie\n";
        }
        
    }
    
    
    return 0;
}