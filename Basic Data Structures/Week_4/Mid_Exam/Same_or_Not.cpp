#include<bits/stdc++.h>
using namespace std;
class Same_or_Not
{
    public:
    bool sameornot(stack<int> st, queue<int> q)
    {
        if (st.size()!=q.size())
        {
            return false;
        }
        while (!st.empty())
        {
            if (st.top()!=q.front())
            {
                return false;
            }
            st.pop();
            q.pop();
        }
        return true;
        
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    stack<int> st;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    Same_or_Not obj;
    if (obj.sameornot(st,q))
        cout<<"YES";
    else
        cout<<"NO";
    
    
    return 0;
}