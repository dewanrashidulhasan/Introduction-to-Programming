#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        int ammount=0;
        if (x<=20)
        {
            ammount=x*10;
        }
        else
        {
            ammount=20*10;
            int available=x-20;
            int phaseball=available/2;
            ammount+=phaseball*5;
        }
        cout<<ammount<<'\n';
    }
    
    
    return 0;
}