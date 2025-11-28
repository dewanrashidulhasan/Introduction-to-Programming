#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    ss>>word;
    reverse(word.begin(),word.end());
    cout<<word; // 1st word ta asbe
    while (ss>>word)//2nd word hoite loop suru hoibe karno 1st word ta alada kore print korse
    {
        reverse(word.begin(),word.end());
        cout<<" "<<word;
    }
    
    return 0;
}
