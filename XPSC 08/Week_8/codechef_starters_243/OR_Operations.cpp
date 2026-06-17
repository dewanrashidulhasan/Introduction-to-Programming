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
        vector<int> a(n);
        int sum_or=0,cur_or=0,cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum_or|=a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cur_or|=a[i];
            if (cur_or==sum_or)
            {
                cnt++;
                cur_or=0;
            }
            
        }
        cout<<n-cnt<<'\n';
    }
    
    
    return 0;
}