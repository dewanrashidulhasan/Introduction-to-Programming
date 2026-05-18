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
        string s;
        cin>>n>>s;
        int cnt=0;
        for(char ch:s)
        {
            if(ch=='1')
            {
                cnt++;
            }
        }
        if(s.front()!='1'||s.back()!='1'||cnt%2==1)
        {
            cout<<"NO\n";
            continue;
        }
        string a,b;
        int one=0,zero=0;
        for(char ch:s)
        {
            if(ch=='1')
            {
                one++;
                char braket;
                if (one<=(cnt/2))
                {
                    braket='(';
                }
                else
                {
                    braket=')';
                }
                a.push_back(braket);
                b.push_back(braket);
            }
            else
            {
                if (zero%2==0)
                {
                    a.push_back('(');
                    b.push_back(')');
                }
                
                else
                {
                    a.push_back(')');
                    b.push_back('(');
                }
                zero++;
            }
            
        }
        cout<<"YES\n"<<a<<'\n'<<b<<'\n';
    }
    
    
    return 0;
}