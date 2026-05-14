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
        int a=0,b=0,c=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if (x==1)
            {
                a++;
            }
            else if (x==2)
            {
                b++;
            }
            else
            {
                c++;
            }
            
        }
        ll ans=(a*(a-1)/2)+(a*b)+(b*c);
        cout<<ans<<'\n';
        
    }
    
    
    return 0;
}