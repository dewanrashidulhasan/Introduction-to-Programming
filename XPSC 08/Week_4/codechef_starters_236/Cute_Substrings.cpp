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
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if ((j-i)%2==0)
                {
                    if(s[j]!='u'&&s[j]!='o')
                        break;
                }
                else
                {
                    if(s[j]!='w')
                    break;
                }
                int length=j-i+1;
                if (length%2==1)
                {
                    cnt=max(cnt,length);
                }
                
            }
            
        }
        cout<<cnt<<"\n";
        
    }
    
    
    return 0;
}