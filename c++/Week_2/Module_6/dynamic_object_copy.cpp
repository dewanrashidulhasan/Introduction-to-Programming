#include<bits/stdc++.h>
using namespace std;
class cricketer
{
    public:
    string country;
    int jersey;
    cricketer(string country,int jersey)
    {
        this->country=country;
        this->jersey=jersey;
    }
    
};
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string c;
        getline(cin,c);
        int j;
        cin>>j;
        cin.ignore();
        cricketer *dhoni= new cricketer(c,j);

        string c1;
        getline(cin,c1);
        int j1;
        cin>>j1;
        cin.ignore();
        cricketer *kholi= new cricketer(c1,j1);
        *kholi=*dhoni;

        delete dhoni;
        cout<<kholi->country<<" "<<
        kholi->jersey<<endl;
        delete kholi;
    }
    
    
    return 0;
}
