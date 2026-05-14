#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--)
    {
        ll N, K, H;
        cin >> N >> K >> H;

        vector<ll> A(N);

        for(ll i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        ll total = 0;

        for(ll i = 0; i < N - 1; i++)
        {
            ll start = A[i];
            ll target = A[i + 1];

            ll LIMIT = max(start, target) + 100;

            priority_queue<
                pair<ll,ll>,
                vector<pair<ll,ll>>,
                greater<pair<ll,ll>>
            > pq;

            unordered_map<ll,ll> dist;

            pq.push({0, start});
            dist[start] = 0;

            while(!pq.empty())
            {
                auto [cost, node] = pq.top();
                pq.pop();

                if(node == target)
                {
                    total += cost;
                    break;
                }

                if(dist[node] != cost)
                    continue;

                // down
                if(node > 1)
                {
                    ll nxt = node - 1;
                    ll ncost = cost + K;

                    if(!dist.count(nxt) || ncost < dist[nxt])
                    {
                        dist[nxt] = ncost;
                        pq.push({ncost, nxt});
                    }
                }

                // up
                {
                    ll nxt = node + 1;

                    if(nxt <= LIMIT)
                    {
                        ll ncost = cost + H;

                        if(!dist.count(nxt) || ncost < dist[nxt])
                        {
                            dist[nxt] = ncost;
                            pq.push({ncost, nxt});
                        }
                    }
                }

                // free move
                {
                    ll nxt = node + (node & -node);

                    if(nxt <= LIMIT)
                    {
                        ll ncost = cost;

                        if(!dist.count(nxt) || ncost < dist[nxt])
                        {
                            dist[nxt] = ncost;
                            pq.push({ncost, nxt});
                        }
                    }
                }
            }
        }

        cout << total << '\n';
    }

    return 0;
}