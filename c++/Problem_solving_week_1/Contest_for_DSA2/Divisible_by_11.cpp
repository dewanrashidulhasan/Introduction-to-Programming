#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int odd_sm=0;
    int even_sm=0;
    int len=n.size();
    for (int i = len-1,pos=1; i >=0; i--,pos++)
    {
        int num=n[i]-'0';
        if (pos%2!=0)
        {
            odd_sm+=num;
        }
        else
        {
            even_sm+=num;
        }
        
    }
    int difference= abs(odd_sm-even_sm);
    if (difference%11==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}