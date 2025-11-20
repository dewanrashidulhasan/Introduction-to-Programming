#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    char name[101];
    int roll;
    int section;
    double math_mark;
    int cls;
    student(char ch[],int r,int s,double m,int c)
    {
        strcpy(name,ch);
        roll=r;
        section=s;
        math_mark=m;
        cls=c;
    }
};
int main()
{
    char ch[101];
    int r,s,c;
    double m;

    cin.getline(ch,101);
    cin >>r>>s>>m>>c;
    student x(ch,r,s,m,c);
    cin.ignore();

    cin.getline(ch,101);
    cin >>r>>s>>m>>c;
    student y(ch,r,s,m,c);
    cin.ignore();

    cin.getline(ch,101);
    cin >>r>>s>>m>>c;
    student z(ch,r,s,m,c);
    cin.ignore();

    student mx= x;
    if (y.math_mark>mx.math_mark)
    {
        mx=y;
    }
    
    if (z.math_mark>mx.math_mark)
    {
        mx=z;
    }
    cout << mx.name << endl;
    return 0;
}