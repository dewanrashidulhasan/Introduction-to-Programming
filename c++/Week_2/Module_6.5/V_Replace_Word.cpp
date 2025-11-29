#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
    for (auto it=s.begin(); it < s.end(); )
    {
      if (distance(it,s.end())>=5&&
      string(it,it+5)=="EGYPT")
      {
        it=s.erase(it,it+5);
        it=s.insert(it,' ');
        it++;
      }
      else
      {
        it++;
      }
      
    }
    
    cout<<s<<endl;
    return 0;
}