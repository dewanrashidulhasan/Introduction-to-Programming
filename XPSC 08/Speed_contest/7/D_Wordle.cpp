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
        string s,k;
        cin>>s>>k;
        for (int i = 0; i < 5; i++)
        {
            if (s[i]==k[i])
            {
                cout<<'G';
            }
            else
            {
                cout<<'B';
            }
        }
        cout<<'\n';
    }
    
    
    return 0;
}