#include<bits/stdc++.h>
using namespace std;
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int m;
            string s;
            cin>>m>>s;
            int u=0,d=0;
            for(char c:s)
            {
                if(c=='U')u++;
                else d++;
            }
            cout<<(a[i]-u+d+100)%10<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}