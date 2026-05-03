#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n*n);
        int lower = 1;
        int heigher = n * n;
        for (int i = 0; i < n*n; i++)
        {
            if(i%2==0)
                v[i]=lower++;
            else v[i]=heigher--;
        }
        
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {

                for (int j = 0; j < n; j++)
                {
                    cout<<v[i*n+j]<<" \n"[j==n-1];
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    cout<<v[i*n+j]<<" \n"[j==0];
                }
            }
        }
    }

    return 0;
}