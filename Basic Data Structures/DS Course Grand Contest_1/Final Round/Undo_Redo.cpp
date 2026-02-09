#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<char>done,undone;
    while (n--)
    {
        string s;
        cin>>s;
        if (s=="TYPE")
        {
            char x;
            cin>>x;
            done.push(x);
            while (!undone.empty())
            {
                undone.pop();
            }
            
        }
        else if (s=="UNDO")
        {
            if (!done.empty())
            {
                undone.push(done.top());
                done.pop();
            }
            
        }
        else if (s=="REDO")
        {
            if (!undone.empty())
            {
                done.push(undone.top());
                undone.pop();
            }
        }
        
    }
    string ans=" ";
    while(!done.empty())
    {
        ans+=done.top();
        done.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}