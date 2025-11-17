// #include<bits/stdc++.h>
// using namespace std;
// int* p;
// void fun()
// {
//     int x= 10;
//     p=&x;
//     cout<<"fun ->"<< *p<<endl;
//     return;
// }
// int main()
// {
//     // int x =10;
//     // int *p =new int;
//     // *p =100;
//     // cout << *p <<endl;
//     fun();
//     cout <<"main->"<<*p<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int* p;
void fun()
{
    int* x= new int;
    *x =10;
    p=x;
    cout<<"fun ->"<< *p<<endl;
    return;
}
int main()
{
    // int x =10;
    // int *p =new int;
    // *p =100;
    // cout << *p <<endl;
    fun();
    cout <<"main->"<<*p<<endl;
    return 0;
}