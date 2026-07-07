#include <bits/stdc++.h>
using namespace std;

bool ok(int x)
{
    int y = x, z = 0;

    while (x)
    {
        z = z * 10 + x % 10;
        x /= 10;
    }

    return y == z;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    long long ans = 0;

    for (int i = a; i <= b; i++)
    {
        if (ok(i))
            ans += i;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
        solve();
}