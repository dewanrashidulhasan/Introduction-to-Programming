#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        
    string l,s,x;
    getline(cin,l);
    while (l.size() == 0)
    {
        getline(cin, l); 
    } 
    stringstream ss(l);
    ss>>s>>x;
    int sz=x.size();
    
    for (auto it =s.begin();it+sz <=s.end();)
    {
      if (string(it,it+sz)==x)
      {
        it=s.erase(it,it+sz);
        it=s.insert(it,'#');
        ++it;
      }
      else
      {
        ++it;
      }
      
    }
    
    cout<<s<<endl;
    }
    

    return 0;
}