#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<string> msg(n);
    for (int i = 0; i < n; i++)
    {
        cin>>msg[i];
    }
    unordered_set<string> seen;
    seen.reserve(n*2);
    for (int i = n-1; i >=0; i--)
    {
        if (!seen.count(msg[i]))
        {
            cout<<msg[i]<<'\n';
            seen.insert(msg[i]);
        }
        
    }
    
    return 0;
}