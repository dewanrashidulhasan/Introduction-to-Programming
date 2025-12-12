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
        for (auto it = s.begin(); it != s.end(); it++)
        {
            frequ[*it-'a']++;
        }
        int odd=0;
        for (int i = 0; i < 26; i++)
        {
            if (frequ[i]%2!=0)
            {
                odd++;
            }
            
        }
        int final_chr_needed=0;

        if (odd>1)
        {
            final_chr_needed=odd-1;
        }
        cout<<final_chr_needed<<endl;
    }
    
    return 0;
}