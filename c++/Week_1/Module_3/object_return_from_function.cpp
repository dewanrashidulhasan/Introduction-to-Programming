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
student fun()
{
    int roll;
    int cls;
    double gpa;
    cin >>roll>>cls>>gpa;
    student a(roll,cls,gpa);
    
    return a;
    
}
int main()
{
    
    student obj = fun();
    cout <<obj.roll<<" "<<obj.cls<<
    " "<<obj.gpa<<endl;

    

    return 0;
}