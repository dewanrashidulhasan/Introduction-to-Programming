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
        vector<int> a(n),b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int shot=0;
        for (int i = 0; i < n; i++)
        {
            if (shot>=a[i])
            {
                b[i]=a[i];
            }
            else
            {
                b[i]=shot;
                shot++;
            }
            
        }
        for(int x:b)
        {
            cout<<x<<" ";
        }cout<<'\n';
    }
    
    
    return 0;
}