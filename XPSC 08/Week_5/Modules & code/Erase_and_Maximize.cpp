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
        int n,s;
        cin>>n>>s;
        if (s<=5*n)
        {
            cout<<6*n<<'\n';
        }
        else
        {
            cout<<11*n-s<<'\n';
        }
        
    }
    
    
    return 0;
}