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
        vector<int> six,three,two,other;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if(x%6==0) six.push_back(x);
            else if(x%2==0) two.push_back(x);
            else if(x%3==0) three.push_back(x);
            else other.push_back(x);
        }
        for(int x:six) cout<<x<<" ";
        for(int x:two) cout<<x<<" ";
        for(int x:other) cout<<x<<" ";
        for(int x:three) cout<<x<<" ";
        cout<<'\n';
    }
    
    
    return 0;
}