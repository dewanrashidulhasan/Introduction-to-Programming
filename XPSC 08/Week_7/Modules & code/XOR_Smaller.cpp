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
        int is_valid= (1<<30)-1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            is_valid &=x;
        }
        cout<<is_valid<<'\n';
    }
    
    
    return 0;
}