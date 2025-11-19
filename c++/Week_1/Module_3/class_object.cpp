#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    char name[101];
    int roll;
    double gpa;

};
int main()
{
    student a,b;
    cin.getline(a.name,101);
    cin>>a.roll>>a.gpa;
    cin.ignore();
    cin.getline(b.name,101);
    cin>>b.roll>>b.gpa;
    // a.roll=10;
    // a.gpa=4.5;
    // char temp[101]= "shakib";
    // strcpy(a.name,temp);


    cout <<a.name<<" "<<
    a.roll<<" "<<a.gpa<<endl;

    cout <<b.name<<" "<<
    b.roll<<" "<<b.gpa<<endl;
    return 0;
}