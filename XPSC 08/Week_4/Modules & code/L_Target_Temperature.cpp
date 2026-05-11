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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int mx= b[0];
        for(int x:b)
        {
            if (x>mx)
            {
                mx=x;
            }
            
        }
        unordered_set<int> s;
        bool ok=true;
        for(int x:b)
        {
            if(x<mx)
            {
                if (s.count(x))
                {
                    ok=false;
                    break;
                }
                s.insert(x);
            }
        }
        if (ok)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
    }
    
    
    return 0;
}