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
    int sum=0,sum1=0,indx=0;
    for (auto it =s.begin(); it <s.end(); it++,indx++)
    {
        if (indx<3)
        {
            sum+=*it-'0';
        }
        else
        {
            sum1+=*it-'0';
        }

    }
            if (sum==sum1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
   }
   
    return 0;
}