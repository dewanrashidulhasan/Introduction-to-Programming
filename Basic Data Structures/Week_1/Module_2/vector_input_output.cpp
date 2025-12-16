#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // vector<int> v(n); //1st way
    // for (int i = 0; i <n; i++)
    // {
    //     cin>>v[i];
    // }
    // for (int i = 0; i <n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    vector<int> v;//2nd way
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for (int i = 0; i <n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}