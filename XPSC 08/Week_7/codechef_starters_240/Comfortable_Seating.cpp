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
        int mn=INT_MAX,cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i]<mn)
            {
                mn=a[i];
                cnt=1;
            }
            else if (a[i]==mn)
            {
                cnt++;
            }
            
        }
        if (cnt>=2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    
    
    return 0;
}