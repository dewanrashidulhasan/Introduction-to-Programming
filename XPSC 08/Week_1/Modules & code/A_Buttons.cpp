#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max({(a + b), (a + (a - 1)), (b + (b - 1))});
    cout<<mx<<"\n";
    return 0;
}