#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    switch (n)
    {
    case 1:
        cout<<"Saturday\n";
        break;
    
    case 2:
        cout<<"Sunday\n";
        break;
    
    case 3:
        cout<<"Monday\n";
        break;
    
    case 4:
        cout<<"Tuesday\n";
        break;
    
    case 5:
        cout<<"Wednesday\n";
        break;
    
    case 6:
        cout<<"Thursday\n";
        break;
    
    case 7:
        cout<<"Friday\n";
        break;
    
    default:
    cout<<"kire sala\n";
        break;
    }
    return 0;
}