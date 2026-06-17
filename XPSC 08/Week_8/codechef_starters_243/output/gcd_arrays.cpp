#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

/**
 * Problem: GCD Arrays (Easy)
 *
 * Goal: Count arrays where gcd(A1...An) = 1 but every proper subsegment has gcd > 1.
 * This condition is satisfied if gcd(A1...An-1) > 1 AND gcd(A2...An) > 1.
 *
 * Formula used (Inclusion-Exclusion):
 * Ans = sum_{g=1 to M} mu(g) * floor(M/g)^N
 *       - 2 * M * sum_{d=1 to M} mu(d) * floor(M/d)^(N-1)
 *       + sum_{d1=1 to M} sum_{d2=1 to M} mu(d1) * mu(d2) * floor(M/d1) * floor(M/d2) * floor(M/lcm(d1, d2))^(N-2)
 */

typedef long long ll;
const int MOD = 998244353;

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

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    if (a == 0 || b == 0) return 0;
    return (a * b) / gcd(a, b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int maxM = 100;
    vector<int> mu(maxM + 1, 0);
    vector<int> primes;
    vector<bool> is_prime(maxM + 1, true);
    mu[1] = 1;
    for (int i = 2; i <= maxM; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            mu[i] = -1;
        }
        for (int p : primes) {
            if (i * p > maxM) break;
            is_prime[i * p] = false;
            if (i % p == 0) {
                mu[i * p] = 0;
                break;
            } else {
                mu[i * p] = -mu[i];
            }
        }
    }

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        ll N, M;
        cin >> N >> M;

        // Term 1: sum mu(g) * floor(M/g)^N
        ll term1 = 0;
        for (int g = 1; g <= M; ++g) {
            if (mu[g] == 0) continue;
            ll val = power(M / g, N);
            if (mu[g] == 1) term1 = (term1 + val) % MOD;
            else term1 = (term1 - val + MOD) % MOD;
        }

        // Term 2: 2 * M * sum mu(d) * floor(M/d)^(N-1)
        ll term2_sum = 0;
        for (int d = 1; d <= M; ++d) {
            if (mu[d] == 0) continue;
            ll val = power(M / d, N - 1);
            if (mu[d] == 1) term2_sum = (term2_sum + val) % MOD;
            else term2_sum = (term2_sum - val + MOD) % MOD;
        }
        ll term2 = (2 * M % MOD * term2_sum) % MOD;

        // Term 3: sum mu(d1)mu(d2) * floor(M/d1) * floor(M/d2) * floor(M/lcm(d1, d2))^(N-2)
        ll term3 = 0;
        for (int d1 = 1; d1 <= M; ++d1) {
            if (mu[d1] == 0) continue;
            for (int d2 = 1; d2 <= M; ++d2) {
                if (mu[d2] == 0) continue;
                ll L = lcm(d1, d2);
                if (L > M) continue;

                ll val = (M / d1) % MOD;
                val = (val * ((M / d2) % MOD)) % MOD;
                val = (val * power(M / L, N - 2)) % MOD;

                if (mu[d1] * mu[d2] == 1) term3 = (term3 + val) % MOD;
                else term3 = (term3 - val + MOD) % MOD;
            }
        }

        ll ans = (term1 - term2 + term3 + 2LL * MOD) % MOD;
        cout << ans << "\n";
    }
    return 0;
}