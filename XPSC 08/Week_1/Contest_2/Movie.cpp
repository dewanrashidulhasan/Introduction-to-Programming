#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,a,b,c;
        cin>>n>>m>>a>>b>>c;
        int combo=min(n,m);
        int ammount;
        if (c<a+b)
        {
            ammount=combo*c+(n-combo)*a+(m-combo)*b;    
        }
        else
        {
            ammount=n*a+m*b;
        }
        cout<<ammount<<"\n";
    }
    
    return 0;
}