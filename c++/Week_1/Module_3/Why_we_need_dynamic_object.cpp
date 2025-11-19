#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    
    int roll;
    int cls;
    double gpa;
    student(int roll,int cls,double gpa)
    {
        
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }

};
student* fun()
{
    int roll;
    int cls;
    double gpa;
    cin >>roll>>cls>>gpa;
    student a(roll,cls,gpa);
    student *p=&a;
    // student b(roll,cls,gpa);
    return p;
    
}
int main()
{
    
    student *p= fun();
    cout <<p->roll<<" "<<p->cls<<
    " "<<p->gpa<<endl;

    // cout <<obj.roll<<" "<<obj.cls<<
    // " "<<obj.gpa<<endl;

    return 0;
}