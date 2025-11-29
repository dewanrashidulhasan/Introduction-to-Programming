#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;
    
};
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    //detatype arrayname size;
    //int a[5];
    student a[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>
        a[i].marks;
        cin.ignore();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<
        a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}