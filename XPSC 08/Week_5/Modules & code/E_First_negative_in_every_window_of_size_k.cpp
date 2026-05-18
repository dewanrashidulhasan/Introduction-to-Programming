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
        vector<int> odd,even;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if (x%2)
            {
                odd.push_back(x);
            }
            else
            {
                even.push_back(x);
            }
            
        }
        for(int x:odd)
        {
            cout<<x<<" ";
        }
        for(int x: even)
        {
            cout<<x<<" ";
        }
        cout<<'\n';
    }
    
    
    return 0;
}