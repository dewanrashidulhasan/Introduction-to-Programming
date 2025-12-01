#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;
    
};
bool cmp(student l,student r)
    {
        // if (l.marks<r.marks)
        // {
        //     return true;
        // }
        // else if (l.marks>r.marks)
        // {
        //     return false;
        // }
        
        // else
        // {
        //     if (l.roll>r.roll)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        // }
        // upor er ta and necer ta 2 ta eii soman
        if (l.marks=r.marks)
        {
            return l.roll>r.roll;
        }
        else
        {
            return l.marks<r.marks;
        }
        

        
        //upor er tar moto eii khali bolse j l r er teke soto bar boro jaita caise sai rokom takte hoibe
        // return l.marks<r.marks;
    }
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
    
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll
        <<" "<<a[i].marks<<endl;
    }
    return 0;
}