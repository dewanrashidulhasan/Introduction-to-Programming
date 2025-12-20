#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int frequ[26]={0};
        for(char c:s)
        {
            frequ[c-'a']++;
        }
        int odd=0;
        for (int i = 0; i < 26; i++)
        {
            if (frequ[i]%2!=0)
            {
                odd++;
            }
            
        }
        if (odd==0)
        {
            cout<<odd<<endl;
        }
        else
        {
            cout<<odd-1<<endl;
        }
        
    }
    
    return 0;
}