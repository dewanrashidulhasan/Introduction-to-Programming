#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout <<"Min:- "<<min(a,b)<<endl;
    cout <<"Max:- "<<max(a,b)<<endl;
    swap(a,b);
    cout <<"Swap:- "<<a<<" "<<b<<endl;
    return 0;
}