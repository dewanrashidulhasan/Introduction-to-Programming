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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int l=0,r=n-1;
        bool palindrom=true;
        while (l<r)
        {
            if (a[l]==a[r])
            {
                l++;
                r--;
            }
            else if (a[l]==k)
            {
                l++;
            }
            else if (a[r]==k)
            {
                r--;
            }
            else
            {
                palindrom=false;
                break;
            }
            
        }
        if (palindrom)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
        
    }
    
    
    return 0;
}