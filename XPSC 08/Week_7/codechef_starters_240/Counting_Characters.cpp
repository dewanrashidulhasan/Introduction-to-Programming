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
        int a=0,b=0;
        for(char c:s)
        {
            if(c=='a')
                a++;
            else b++;
        }
        cout<<a<<" "<<b<<'\n';
    }
    
    
    return 0;
}