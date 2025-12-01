#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    string sec;
    int id;
    
    
};
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    student  a[n];
    for (int i = 0; i < n; i++)
    {
        
        cin>>a[i].name>>a[i].cls>>
        a[i].sec>>a[i].id;
        cin.ignore();
    }
    for (int i = 0; i < n/2; i++)
    {
        
        swap(a[i].sec,a[n-1-i].sec);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].cls
        <<" "<<a[i].sec<<" "<<a[i].id<<endl;
    }
    return 0;
}