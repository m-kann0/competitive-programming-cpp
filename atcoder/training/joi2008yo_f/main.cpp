#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

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

const ll INF = 1'000'000'000'000'000'000;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<vector<edge>> graph(n);

    rep(i, k) {
        ll op;
        cin >> op;

        if (op == 1) {
            ll c, d, e;
            cin >> c >> d >> e;
            c--; d--;
            graph[c].push_back(edge{d, e});
            graph[d].push_back(edge{c, e});
            continue;
        }

        ll a, b;
        cin >> a >> b;
        a--; b--;

        vector<ll> dist(n, INF);
        priority_queue<P, vector<P>, greater<P>> pq;
        dist[a] = 0;
        pq.emplace(0, a);
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
        if (dist[b] >= INF) {
            cout << -1 << endl;
        } else {
            cout << dist[b] << endl;
        }
    }

    return 0;
}