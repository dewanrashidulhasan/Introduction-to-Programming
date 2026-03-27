#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string decoder;
        for (int i = 0; i < (int)s.size(); i+=2)
        {
            char ch=s[i];
            int cnt=s[i+1]-'0';
            for (int j = 0; j < cnt; j++)
            {
                decoder+=ch;
            }
        }
        cout<<decoder<<"\n";
    }
    return 0;
}