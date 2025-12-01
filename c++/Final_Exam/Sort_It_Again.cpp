#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    string sec;
    int id;
    int math_marks;
    int eng_marks;
    
};
bool cmp(student l,student r)
    {
        if (l.eng_marks!=r.eng_marks)
        {
            return l.eng_marks>r.eng_marks;
        }
        else if (l.math_marks!=r.math_marks)
        {
            return l.math_marks>r.math_marks;
        }
        else
        {
            return l.id<r.id;
        }
        
        
        
    }
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    student a[n];
    for (int i = 0; i < n; i++)
    {
        
        cin>>a[i].name>>a[i].cls>>a[i].sec>>
        a[i].id>>a[i].math_marks>>a[i].eng_marks;
        cin.ignore();
    }
    
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<
        a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}