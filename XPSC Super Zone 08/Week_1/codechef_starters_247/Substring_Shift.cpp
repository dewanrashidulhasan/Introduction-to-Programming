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
        int is_z=-1;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='z')
            {
                is_z=i;
                break;
            }
            
        }
        if (is_z!=-1)
        {
            int x=is_z;
            while (x<n&&s[x]=='z')
            {
                s[x]='a';
                x++;
            }
            
        }
        cout<<s<<'\n';
    }
    
    
    return 0;
}