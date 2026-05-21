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
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int ans=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (a[i]==a[j])
                {
                    int move=i+(n-1-j);
                    ans=min(ans,move);
                }
            }
            
        }
        if (ans==INT_MAX)
        {
            cout<<-1<<'\n';
        }
        else
        {
            cout<<ans<<'\n';
        }

    }
    
    
    return 0;
}