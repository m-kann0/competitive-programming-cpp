#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

struct edge { ll to, cost, k; };

int main() {
    ll N, M, X, Y;
    cin >> N >> M >> X >> Y;
    X--; Y--;

    vector<vector<edge>> graph(N);
    rep(i, M) {
        ll A, B, T, K;
        cin >> A >> B >> T >> K;
        A--; B--;
        graph[A].push_back(edge{B, T, K});
        graph[B].push_back(edge{A, T, K});
    }

    const ll INF = 1'000'000'000'000'000'000;
    priority_queue<P, vector<P>, greater<P>> que;
    vector<ll> d(N, INF);
    d[X] = 0;
    que.push(P(0, X));
    while (!que.empty()) {
        P p = que.top(); que.pop();
        ll v = p.second;
        if (d[v] < p.first) {
            continue;
        }
        for (auto e : graph[v]) {
            ll wait;
            if (d[v] % e.k == 0) {
                wait = 0;
            } else {
                wait = e.k - (d[v] % e.k);
            }
            if (d[e.to] > d[v] + wait + e.cost) {
                d[e.to] = d[v] + wait + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }

    if (d[Y] >= INF) {
        cout << -1 << endl;
    } else {
        cout << d[Y] << endl;
    }

    return 0;
}