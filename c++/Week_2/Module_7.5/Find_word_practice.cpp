#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int count=0;
    string st="john";
    while (ss>>word)
    {
        if (st==word)
        {
            count++;
        }
        
    }
    cout<<count<<endl;
    
    return 0;
}
