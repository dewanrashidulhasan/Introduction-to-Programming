#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n+1);
    for (int i = 1; i <=n; i++)
    {
       cin>>a[i];
    }
    vector<int> silant(n+1,0);
    for (int i = 2; i <=n-1; i++)
    {
        if(a[i]<a[i-1]&&a[i]<a[i+1])
        {
            silant[i]=1;
        }
    }
    vector<int> silents(n+1,0);
    for (int i = 1; i <=n; i++)
    {
        silents[i]=silents[i-1]+silant[i];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<silents[r]-silents[l-1]<<endl;
    }
    
    
    return 0;
}