#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    unordered_set<string> availabe;
    availabe.reserve(n*2);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if(availabe.count(s))
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
            availabe.insert(s);
        }
        
    }
    
    
    return 0;
}