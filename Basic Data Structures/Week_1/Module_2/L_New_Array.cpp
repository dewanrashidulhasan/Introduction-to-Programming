#include<bits/stdc++.h>
using namespace std;
void newarray(vector<int>&a,vector<int>&b)
{
    for (int i = 0; i < b.size(); i++)
    {
        cout<<b[i]<<" ";
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    newarray(a,b);
    
    return 0;
}