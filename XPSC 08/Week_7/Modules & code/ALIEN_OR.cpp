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
        int n,k;
        cin>>n>>k;
        vector<int> a(k,0);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            int one=0;
            int pos=-1;
            for (int j = 0; j < k; j++)
            {
                if (s[j]=='1')
                {
                    one++;
                    pos=j;
                }
                
            }
            if (one==1)
            {
                a[pos]=1;
            }
            
        }
        bool possible=true;
        for (int i = 0; i < k; i++)
        {
            if (!a[i])
            {
                possible=false;
                break;
            }
            
        }
        if (possible)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    }
    
    
    return 0;
}