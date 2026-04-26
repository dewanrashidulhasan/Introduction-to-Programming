#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        while(m--)
        {
            int l, r;
            cin >> l>> r;
            if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end()))
            {
                cout << "NO" << '\n';
            }
            else
            {
                int stratingStationleftMostIndex, endingStationRightMostIndex;
                stratingStationleftMostIndex = *mp[l].begin();
                endingStationRightMostIndex = *mp[r].rbegin();
                if (stratingStationleftMostIndex < endingStationRightMostIndex)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
        }
    }

    return 0;
}