#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=1,cnt=1;
    for (int i = 1; i < n; i++)
    {
        if (v[i]==v[i-1])
        {
            cnt++;
        }
        else cnt =1;
        ans=max(ans,cnt);
    }
    cout<<ans<<'\n';
    
    return 0;
}