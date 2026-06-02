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
        int zero=0,one=0;
        for(char c:s)
        {
            if (c=='0')
            {
                zero++;
            }
            else one++;
        }
        int pair=n/2;
        int is_pair=pair-k;
        bool ok=true;
        if (is_pair>zero||is_pair>one)
        {
            ok=false;
        }
        if ((zero-is_pair)%2!=0)
        {
            ok=false;
        }
        if (ok)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    
    
    
    return 0;
}