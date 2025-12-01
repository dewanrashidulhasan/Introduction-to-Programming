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
    student a[n];
    for (int i = 0; i < n; i++)
    {
        
        cin>>a[i].name>>a[i].roll>>
        a[i].marks;
        cin.ignore();
    }
    reverse(a,a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll
        <<" "<<a[i].marks<<endl;
    }
    return 0;
}