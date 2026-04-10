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
        int n;
        cin>>n;
        int sum=0,mx=0;
        for (int i = 0; i < n; i++)
        {
            int h;
            cin>>h;
            if (h==1)
            {
                sum++;
            }
            else
            {
                mx++;
            }
        }
        cout<<mx+(sum+1)/2<<"\n";
    }
    
    return 0;
}