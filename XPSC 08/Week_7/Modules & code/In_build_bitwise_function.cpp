#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check_kth_bit_on_or_off(int n,int k)
{
    return((n>>k)&1);
}
void print_on_and_off_bits(int n)
{
    for (int i = 7; i >= 0; i--)
    {
        if (check_kth_bit_on_or_off(n,i))
        {
            cout<<1<<' ';
        }
        else
        {
            cout<<0<<' ';
        }
        
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    print_on_and_off_bits(39);
    cout<<'\n';
    cout<<__builtin_popcount(39)<<'\n';
    cout<<__builtin_popcountll(39)<<'\n';
    cout<<__builtin_parity(39)<<'\n';
    cout<<__builtin_parity(41)<<'\n';
    cout<<__lg(39)<<'\n';
    cout<<__builtin_ctz(39)<<'\n';
    return 0;
}