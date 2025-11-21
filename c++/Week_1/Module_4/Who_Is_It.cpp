#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    int id;
    char name[101];
    char section;
    int mark;

};
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
     student a,b,c;
     cin >> a.id >>a.name >>
      a.section >> a.mark;

     cin >> b.id >>b.name >>
      b.section >> b.mark;

     cin >> c.id >>c.name >>
      c.section >> c.mark;

      student mx = a;
      if (b.mark>mx.mark)
      {
        mx=b;
      }
      else if (b.mark==mx.mark&&b.id<mx.id)
      {
        mx=b;
      }
      if (c.mark>mx.mark)
      {
        mx=c;
      }
      else if (c.mark==mx.mark&&c.id<mx.id)
      {
        mx=c;
      }
      cout<<mx.id<<" "<<mx.name<<
      " "<<mx.section<<" "<<mx.mark<<endl;
    }
    
   
   
   
   
    return 0;
}

