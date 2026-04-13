#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);
    }
    dq.push_front(9);
    dq.push_back(2);
    for(auto val:dq)
    {
        cout<<val<<" ";
    }
    cout<<"\n";
    return 0;
}