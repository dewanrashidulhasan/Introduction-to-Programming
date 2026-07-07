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
        int cnt1=0,cnt2=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if (x==1)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
            
        }
        if (cnt1%2==1)
        {
            cout<<cnt2<<'\n';
        }
        else
        {
            cout<<min(cnt2,cnt1/2)<<'\n';
        }
        
        
    }
    
    
    return 0;
}