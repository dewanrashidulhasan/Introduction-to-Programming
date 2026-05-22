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
        string s;
        cin>>n>>k>>s;
        int sum=0;
        int i=0;
        while(i<n)
        {
            if (s[i]=='B')
            {
                sum++;
                i+=k;
            }
            else
            {
                i++;
            }
            
        }
        cout<<sum<<'\n';
        
    }
    
    
    return 0;
}