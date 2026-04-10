#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        vector<int> freq(26,0);
        for(char c:s)
            freq[c-'a']++;
        int odd=0;
        for(int x: freq)
        {
            if(x%2!=0)
                odd++;
        }
        int m=n-k;
        int sizes=m%2;
        if(odd<=k+sizes)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    
    return 0;
}