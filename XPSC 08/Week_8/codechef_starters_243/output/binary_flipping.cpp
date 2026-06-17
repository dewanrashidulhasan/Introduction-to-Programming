#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
const int MOD = 998244353;
const int INV2 = 499122177;

ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

ll solve_seq(const vector<int>& seq) {
    int L = seq.size();
    if (L == 0) return 1;
    if (L == 1) {
        if (seq[0] == -1) return 2;
        return 1;
    }

    vector<ll> dp0(L, 0), dp1(L, 0);

    // Init
    if (seq[0] == -1 || seq[0] == 0) dp0[0] = 1;
    if (seq[0] == -1 || seq[0] == 1) dp1[0] = 1;

    for (int i = 0; i < L - 1; ++i) {
        // To dp0[i+1]
        if (seq[i+1] == -1 || seq[i+1] == 0) {
            dp0[i+1] = (dp0[i] * 1 + dp1[i] * INV2) % MOD;
        }
        // To dp1[i+1]
        if (seq[i+1] == -1 || seq[i+1] == 1) {
            dp1[i+1] = (dp0[i] * INV2 + dp1[i] * 1) % MOD;
        }
    }

    return (dp0[L-1] + dp1[L-1]) % MOD;
}

void solve() {
    int N;
    if (!(cin >> N)) return;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    vector<int> odd, even;
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) odd.push_back(A[i]);
        else even.push_back(A[i]);
    }

    ll sum_odd = solve_seq(odd);
    ll sum_even = solve_seq(even);

    ll ans = power(2, N - 2);
    ans = (ans * sum_odd) % MOD;
    ans = (ans * sum_even) % MOD;

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}
