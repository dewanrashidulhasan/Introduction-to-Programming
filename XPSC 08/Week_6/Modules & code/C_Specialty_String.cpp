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
        string s;
        cin>>n>>s;
        vector<char> st;
        st.reserve(n);
        for(char c:s)
        {
            if (!st.empty()&&st.back()==c)
            {
                st.pop_back();
            }
            else
            {
                st.push_back(c);
            }
            
        }
        if (st.empty())
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
        
    }
    
    
    return 0;
}