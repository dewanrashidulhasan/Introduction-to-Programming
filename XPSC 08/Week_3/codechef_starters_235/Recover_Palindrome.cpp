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
        string s;
        cin>>s;
        bool palindrome=true;
        for (int i = 0; i <n/2; i++)
        {
            int j=n-1-i;
            if (s[i]=='?'&&s[j]=='?')
            {
                palindrome=false;
                break;
            }
            
        }
        if (palindrome&&n%2==1)
        {
            int mid=n/2;
            if(s[mid]=='?')
                palindrome=false;
        }
        if (palindrome)
            cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
         
    }
    
    
    return 0;
}