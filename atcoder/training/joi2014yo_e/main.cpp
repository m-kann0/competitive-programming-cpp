#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

struct edge { ll to, cost; };

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> C(N), R(N);
    rep(i, N) {
        cin >> C[i] >> R[i];
    }
    vector<vector<ll>> graph(N);
    rep(i, K) {
        ll A, B;
        cin >> A >> B;
        A--; B--;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    const ll INF = 1'000'000'000'000'000'000;

    vector<vector<edge>> graph2(N);
    rep(i, N) {
        vector<ll> d(N, INF);
        queue<ll> q;
        d[i] = 0;
        q.push(i);
        while (!q.empty()) {
            ll u = q.front(); q.pop();
            for (ll v : graph[u]) {
                if (d[v] < INF) {
                    continue;
                }
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
        rep(j, N) {
            if (i == j) {
                continue;
            }
            if (d[j] <= R[i]) {
                graph2[i].push_back(edge{j, C[i]});
            }
        }
    }

    vector<ll> d(N, INF);
    priority_queue<P, vector<P>, greater<P>> pq;
    d[0] = 0;
    pq.emplace(0, 0);
    while (!pq.empty()) {
        P p = pq.top(); pq.pop();
        ll u = p.second;
        if (d[u] < p.first) {
            continue;
        }
        for (edge e : graph2[u]) {
            if (d[e.to] > d[u] + e.cost) {
                d[e.to] = d[u] + e.cost;
                pq.emplace(d[e.to], e.to);
            }
        }
    }

    cout << d[N - 1] << endl;

    return 0;
}