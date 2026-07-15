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
        int one=0;
        for(char c:s)
        {
            if (c=='1')
            {
                one++;
            }
            
        }
        int zero=n-one;
        if (one<k||zero<k)
        {
            cout<<s<<'\n';
            continue;
        }
        if (n==2*k)
        {
            string x=s;
            for(char &c:x)
            {
                if (c=='0')
                {
                    c='1';
                }
                else
                {
                    c='0';
                }
            }
            if (x<s)
            {
                cout<<x<<'\n';
            }
            else
            {
                cout<<s<<'\n';
            }
            continue;
            
        }
        for (int i = 0; i < zero; i++)
        {
            cout<<'0';
        }
        for (int i = 0; i < one; i++)
        {
            cout<<'1';
        }
        cout<<'\n';
    }
    
    
    return 0;
}