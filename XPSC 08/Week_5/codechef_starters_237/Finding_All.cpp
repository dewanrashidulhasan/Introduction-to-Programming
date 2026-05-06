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
        int mn=0,mx=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if (x==-1)
            {
                mn++;
            }
            else if (x==1)
            {
                mx++;
            }
            
        }
        vector<int> v;
        if (mx>=2||(mx>=1&&mn==0))
        {
            v.push_back(-1);
        }
        if((mn==0&&mx==0)||(mn>=1&&mx>=1))
        {
            v.push_back(0);
        }
        if (mn>=2||(mn>=1&&mx==0))
        {
            v.push_back(1);
        }
        for (int i = 0; i < (int)v.size(); i++)
        {
            if (i)
            {
                cout<<' ';
            }
            cout<<v[i];
        }
        cout<<'\n';
    }
    
    
    return 0;
}