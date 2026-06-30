#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        vector<int> good(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            int r = (int)sqrt(a[i]);
            good[i] = (1LL * r * r == a[i]);
        }

        vector<vector<int>> g(n + 1);

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<int> parent(n + 1, 0), order;
        order.reserve(n);

        stack<int> st;
        st.push(1);
        parent[1] = -1;

        while (!st.empty()) {
            int v = st.top();
            st.pop();
            order.push_back(v);
            for (int to : g[v]) {
                if (to == parent[v]) continue;
                parent[to] = v;
                st.push(to);
            }
        }

        vector<int> sub(n + 1, 1);

        for (int i = n - 1; i >= 0; i--) {
            int v = order[i];
            for (int to : g[v]) {
                if (to == parent[v]) continue;
                sub[v] += sub[to];
            }
        }

        ll squarewf = 0;

        for (int v = 1; v <= n; v++) {
            if (!good[v]) continue;

            ll sumSq = 0;
            ll pref = 0;
            ll pairPref = 0;
            ll triple = 0;

            if (parent[v] != -1) {
                ll s = n - sub[v];
                sumSq += s * s;
                triple += pairPref * s;
                pairPref += pref * s;
                pref += s;
            }

            for (int to : g[v]) {
                if (to == parent[v]) continue;
                ll s = sub[to];
                sumSq += s * s;
                triple += pairPref * s;
                pairPref += pref * s;
                pref += s;
            }

            ll S = n - 1;
            ll pair = (S * S - sumSq) / 2;

            squarewf += pair + triple;
        }

        cout << squarewf << '\n';
    }

    return 0;
}