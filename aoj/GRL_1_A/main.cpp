#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

struct edge { ll to, cost; };

int main() {
    ll V, E, r;
    cin >> V >> E >> r;
    vector<vector<edge>> graph(V);
    rep(i, E) {
        ll s, t, d;
        cin >> s >> t >> d;
        graph[s].push_back(edge{t, d});
    }

    const ll INF = 1'000'000'000'000'000'000;
    vector<ll> dist(V, INF);
    priority_queue<P, vector<P>, greater<P>> pq;
    dist[r] = 0;
    pq.emplace(0, r);
    while (!pq.empty()) {
        P p = pq.top(); pq.pop();
        ll v = p.second;
        if (dist[v] < p.first) {
            continue;
        }
        for (edge e : graph[v]) {
            bool updated = chmin(dist[e.to], dist[v] + e.cost);
            if (updated) {
                pq.emplace(dist[e.to], e.to);
            }
        }
    }

    rep(i, sizeof(dist)) {
        if (dist[i] >= INF) {
            cout << "INF" << endl;
        } else {
            cout << dist[i] << endl;
        }
    }

    return 0;
}