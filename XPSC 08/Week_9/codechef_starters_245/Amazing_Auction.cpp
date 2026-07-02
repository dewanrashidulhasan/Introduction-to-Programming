#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<ll> a(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        vector<ll> vals = a;
        sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());

        ll ans = 0;

        for (ll x : vals) {
            int gt = 0, ge = 0;
            vector<ll> cost;

            for (int i = 0; i < n; i++) {
                if (a[i] > x) gt++;
                if (a[i] >= x) ge++;
                else cost.push_back((x - a[i]) * c[i]);
            }

            if (gt > k) continue;

            int need = k + 1 - ge;
            if (need < 0) need = 0;
            if (need > (int)cost.size()) continue;

            ll spend = 0;
            if (need > 0) {
                nth_element(cost.begin(), cost.begin() + need, cost.end());
                for (int i = 0; i < need; i++) spend += cost[i];
            }

            ans = max(ans, 1LL * k * x - spend);
        }

        cout << ans << '\n';
    }

    return 0;
}