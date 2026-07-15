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
        int n,p;
        string s;
        cin>>n>>p>>s;
        int left=0,right=0;
        for (int i = 0; i < p; i++)
        {
            if (s[i]=='R')
            {
                left++;
            }
            
        }
        for (int i = p-1; i < n; i++)
        {
            if (s[i]=='L')
            {
                right++;
            }
            
        }
        cout<<min(left,right)<<'\n';

    }
    
    
    return 0;
}