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
        string s;
        cin>>s;
        int fpos=-1,lpos=-1;
        fpos=s.find('B');
        lpos=s.rfind('B');
        int ans=lpos-fpos+1;
        cout<<ans<<'\n';
    }
    
    
    return 0;
}