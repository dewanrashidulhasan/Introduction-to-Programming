#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    
    int roll;
    int cls;
    double gpa;
    student(int r,int c,double g)
    {
        roll=r;
        cls=c;
        gpa=g;
    }

};
int main()
{
    int r;
    int c;
    double g;
    cin >>r>>c>>g;
    student a(r,c,g);
    student b(r,c,g);
    cout <<a.roll<<" "<<a.cls<<
    " "<<a.gpa<<endl;

    cout <<b.roll<<" "<<b.cls<<
    " "<<b.gpa<<endl;
    return 0;
}