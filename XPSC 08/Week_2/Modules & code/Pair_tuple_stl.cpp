#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // pair<string,int> student= make_pair("rashid",10);//1st way
    // cout<<student.first<<" "<<student.second<<"\n";



    // pair<string,int> student= {"rashid",10};//2nd way
    // cout<<student.first<<" "<<student.second<<"\n";



    // pair<string,int> student= {"rashid",10};//3rd way
    // auto [name,roll]= student;
    // cout<<name<<" "<<roll<<"\n";

    // int n;
    // cin>>n;
    // pair<string,int>students[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>students[i].first>>students[i].second;
    // }
    // for(auto[x,y]: students)
    // {
    //     cout<<x<<" "<<y <<"\n";
    // }





    // tuple<string,int,string> t={"Rahim",10,"0171"};
    // // cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<"\n";
    // auto[name,roll,phoneNumber]=t;
    // cout<<name<<" "<<roll<<" "<<phoneNumber<<"\n";



    pair<string,pair<int,string>>p{"Dablu",{7,"013973"}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<"\n";
    return 0;
}