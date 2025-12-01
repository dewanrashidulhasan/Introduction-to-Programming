#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int a[100005];
        for (long long int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if (n%2!=0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        long long int is_even =0;
        for (long long int i = 0; i < n; i++)
        {
            if (a[i]%2==0)
            {
                is_even++;
            }
            

        }

        long long int needed =n/2;
        long long int output =llabs(is_even-needed);
        cout <<output<<endl;
    }
    
    return 0;
}