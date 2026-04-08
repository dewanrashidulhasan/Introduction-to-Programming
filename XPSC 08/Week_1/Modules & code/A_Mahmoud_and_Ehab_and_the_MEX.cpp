#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        st.insert(val);
    }
    int mex=0;
    for (int i = 0; i < x; i++)
    {
        if (st.find(i)==st.end())
        {
            mex++;
        }
    }
    if (st.find(x)!=st.end())
    {
        mex++;
    }
    cout<<mex<<"\n";
    return 0;
}