#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string m;
    int cnt=0;
    while (ss>>m)
    {
        cout<<m<<endl;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}  