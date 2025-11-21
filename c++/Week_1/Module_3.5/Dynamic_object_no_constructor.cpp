#include<bits/stdc++.h>
using namespace std;
class cricket
{
    public:
    char country_name[101];
    int jersey_no;
};
int main()
{
    cricket *dhoni=new cricket;
    cin.getline(dhoni->country_name,101);
    cin>>dhoni->jersey_no;
    cin.ignore();


    cricket *kholi=new cricket;
    kholi->jersey_no=dhoni->jersey_no;
    strcpy(kholi->country_name,dhoni->country_name);
    delete dhoni;
    cout<<kholi->country_name<<" "<<kholi->jersey_no<<endl;
    delete kholi;

    return 0;
}