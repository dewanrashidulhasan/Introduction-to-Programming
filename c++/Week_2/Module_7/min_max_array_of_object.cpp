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
    student mn,mx;
    mn.marks=INT_MAX;
    mx.marks=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks<mn.marks)
        {
            mn=a[i];
        }
        
        if (a[i].marks>mx.marks)
        {
            mx=a[i];
        }
        
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl
    <<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
    return 0;
}