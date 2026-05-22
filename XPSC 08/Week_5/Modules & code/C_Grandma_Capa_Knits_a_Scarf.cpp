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
        string s;
        cin>>n>>s;
        int sum=INT_MAX;
        for (char i = 'a'; i <='z'; i++)
        {
            int l=0,r=n-1;
            int remove=0;
            bool ok=true;
            while (l<r)
            {
                if (s[l]==s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l]==i)
                {
                    l++;
                    remove++;
                }
                else if (s[r]==i)
                {
                    r--;
                    remove++;
                }
                else
                {
                    ok=false;
                    break;
                }
                
            }
            if (ok)
            {
                sum=min(sum,remove);
            }
            
        }
        if (sum==INT_MAX)
        {
            cout<<-1<<'\n';
        }
        else
        {
            cout<<sum<<'\n';
        }
        
    }
    
    
    return 0;
}