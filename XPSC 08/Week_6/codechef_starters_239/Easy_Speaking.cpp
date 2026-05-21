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
        bool hard_pronounce=false;
        for(char ch:s)
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                cnt=0;
            }
            else
            {
                cnt++;
                if (cnt>=4)
                {
                    hard_pronounce=true;
                    break;
                }
                
            }
            
        }
        if (hard_pronounce)
        {
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
    
    
    return 0;
}