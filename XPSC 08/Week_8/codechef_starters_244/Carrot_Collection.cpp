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
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int lsum=0,rsum=0;
        for (int i = 0; i < l-1; i++)
        {
            lsum+=a[i];
        }
        for (int i = r; i < n; i++)
        {
            rsum+=a[i];
        }
        cout<<max(lsum,rsum)<<'\n';
    }
    
    
    return 0;
}