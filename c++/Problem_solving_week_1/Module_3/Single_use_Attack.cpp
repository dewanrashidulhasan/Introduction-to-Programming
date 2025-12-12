#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int h,x,y;
        cin>>h>>x>>y;
        int hits_normal= (h+x-1)/x;
        int special_attack_health=h-y;
        int hits_special=0;
        if (h<=y)
        {
            hits_special=1;
        }
        
        else 
        {
            int hits_after_special=((h-y)+x-1)/x;
            hits_special=1+hits_after_special;
        }
        int downvalue=min(hits_normal,hits_special);
        cout<<downvalue<<endl;
    }
    
    
    return 0;
}