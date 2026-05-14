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
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int min_ammount=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int ammount=0;
                if (j==i+1)
                {
                    ammount=v[i]+(v[j]/2);
                }
                else
                {
                    ammount=v[i]+v[j];
                }
                min_ammount=min(min_ammount,ammount);
            }
            
        }
        cout<<min_ammount<<'\n';
    }
    
    
    return 0;
}