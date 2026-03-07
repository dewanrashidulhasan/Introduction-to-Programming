#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        ll most_height=-1,second_most_height=-1,
        most_indx=-1,second_most_indx=-1;
        for (int i = 0; i < n; i++)
        {
            ll h;
            cin>>h;
            if(h>most_height)
            {
            second_most_height=most_height;
            second_most_indx=most_indx;
            most_height=h;
            most_indx=i;
            }
            else if (h>second_most_height)
            {
                second_most_height=h;
                second_most_indx=i;
            }
            
        }
        if (most_indx>second_most_indx)
        {
            int temp=most_indx;
            most_indx=second_most_indx;
            second_most_indx=temp;
        }
        cout<<most_indx<<" "<<second_most_indx<<endl;
    }
    
    return 0;
}