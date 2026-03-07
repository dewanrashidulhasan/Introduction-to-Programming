#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v;
    long long w;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<Edge> edges;
    edges.reserve(m);

    for (int i = 0; i < m; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int s;
    cin >> s;

    const long long INF = (long long)4e18;

    // Detect any negative cycle in the graph (global check using super source trick).
    vector<long long> cycleCheck(n + 1, 0);
    bool hasNegativeCycle = false;

    for (int i = 1; i <= n; i++) {
        bool updated = false;
        for (const auto &e : edges) {
            if (cycleCheck[e.v] > cycleCheck[e.u] + e.w) {
                cycleCheck[e.v] = cycleCheck[e.u] + e.w;
                updated = true;
                if (i == n) {
                    hasNegativeCycle = true;
                }
            }
        }
        if (!updated) {
            break;
        }
    }

    if (hasNegativeCycle) {
        cout << "Negative Cycle Detected\n";
        return 0;
    }

    // Regular Bellman-Ford from source.
    vector<long long> dist(n + 1, INF);
    dist[s] = 0;

    for (int i = 1; i <= n - 1; i++) {
        bool updated = false;
        for (const auto &e : edges) {
            if (dist[e.u] == INF) {
                continue;
            }
            if (dist[e.v] > dist[e.u] + e.w) {
                dist[e.v] = dist[e.u] + e.w;
                updated = true;
            }
        }
        if (!updated) {
            break;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;
        if (dist[d] == INF) {
            cout << "Not Possible\n";
        } else {
            cout << dist[d] << "\n";
        }
    }

    return 0;
}
