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
int main()
{
    
    int roll;
    int cls;
    double gpa;
    cin >>roll>>cls>>gpa;
    student a(roll,cls,gpa);
    
    student * b= new student(roll,cls,gpa);


    cout <<a.roll<<" "<<a.cls<<
    " "<<a.gpa<<endl;


    return 0;
}