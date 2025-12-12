#include<bits/stdc++.h>
using namespace std;
int free_choclate(int wrappers)
{
    if (wrappers<3)
    {
        return 0;
    }
    
        int free_c=wrappers/3;
        int leftchoclate=wrappers%3;
        return free_c+free_choclate(free_c+leftchoclate);

    
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        int tk=5;
        cin>>n;
        int buy=(n/tk);
        int sum= buy+free_choclate(buy);
        cout<<sum<<endl;
    }
    
    return 0;
}