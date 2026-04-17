#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<char> l;
        vector<int> lowercase, upppercase;
        for (char ch : s)
        {
            if (ch == 'b')
            {
                if (!lowercase.empty())
                {
                    int indx = lowercase.back();
                    lowercase.pop_back();
                    l[indx] = '#';
                }
            }
            else if (ch == 'B')
            {
                if (!upppercase.empty())
                {
                    int indx = upppercase.back();
                    upppercase.pop_back();
                    l[indx] = '#';
                }
            }

            else
            {
                l.push_back(ch);
                if (islower(ch))
                    lowercase.push_back(l.size() - 1);
                else
                    upppercase.push_back(l.size() - 1);
            }
        }
        for(char c:l)
        {
            if(c!='#')
                cout<<c;
        }
        cout<<'\n';
    }

    return 0;
}