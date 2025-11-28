// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i <n; i++)
//     {
//         cin>>a[i];
//     }
//     reverse(a,a+n);
//     for (int i = 0; i <n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }


// sort(a,a+n,greater<int>());

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
