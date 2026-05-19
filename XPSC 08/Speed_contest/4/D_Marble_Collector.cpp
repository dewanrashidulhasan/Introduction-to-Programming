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
        int n,m;
        cin>>n>>m;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        cout<<m-(int)s.size()<<'\n';
    }
    
    
    return 0;
}