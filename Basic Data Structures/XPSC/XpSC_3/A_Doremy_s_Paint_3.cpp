#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        map<int,int> mp;
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        if(mp.size()>2)
            cout<<"No"<<endl;
        else
        {
            if (mp.size()==2)
            {
                vector<int> v;
                for(auto p:mp)
                {
                    v.push_back(p.second);
                }
                if (abs(v[0]-v[1])>1) cout<<"No"<<endl;
                else cout<<"Yes"<<endl;
            }
            else
                cout<<"Yes"<<endl;
            
            }
        }
    
    return 0;
}