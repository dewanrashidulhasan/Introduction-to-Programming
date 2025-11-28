#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    string name;
    int roll;
    int math;
    int english;
    student(string name,int roll,int math,int english)
    {
        this->name=name;
        this->roll=roll;
        this->math=math;
        this->english=english;
    }
    void total()
    {
        cout<<"total mark of "<<name<<
        " = "<<math+english<<endl;
    }
};
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        int r,m,e;
        cin>>r>>m>>e;
        cin.ignore();

        student ami(s,r,m,e);
        cout<<"Name:-"<<ami.name<<endl<<
        "Roll:-"<<ami.roll<<endl;
        ami.total();
    }
    return 0;
}
