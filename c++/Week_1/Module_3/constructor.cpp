#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    char name[101];
    int roll;
    int cls;
    double gpa;
    student(char ch[],int r,int c,double g)
    {
        strcpy(name,ch);
        roll=r;
        cls=c;
        gpa=g;
    }

};
int main()
{
    char ch[101];
    int r,c;
    double g;
    cin.getline(ch,101);
    cin >>r>>c>>g;
    student a(ch,r,c,g);
    cin.ignore();
    cin.getline(ch,101);
    cin >>r>>c>>g;
    student b(ch,r,c,g);
    cin.ignore();
    cout << a.name << " " << a.roll <<
     " " << a.cls << " " << a.gpa << endl;

    cout << b.name << " " << b.roll <<
     " " << b.cls << " " << b.gpa << endl;
    return 0;
}