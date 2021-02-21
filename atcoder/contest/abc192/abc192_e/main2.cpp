#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

struct edge { ll to, t, k; };

int main() {
    ll N, M, X, Y;
    cin >> N >> M >> X >> Y;
    X--; Y--;
    vector<vector<edge>> graph(N);
    rep(i, M) {
        ll A, B, T, K;
        cin >> A >> B >> T >> K;
        A--; B--;
        graph[A].push_back(edge {B, T, K});
        graph[B].push_back(edge {A, T, K});
    }

    const ll INF = 1'000'000'000'000'000'000;

    priority_queue<P, vector<P>, greater<P>> q;
    vector<ll> d(N, INF);
    q.emplace(0, X);
    d[X] = 0;
    while (!q.empty()) {
        P p = q.top(); q.pop();
        ll v = p.second;
        if (d[v] < p.first) {
            continue;
        }
        for (edge & e : graph[v]) {
            ll wait;
            if (d[v] % e.k == 0) {
                wait = 0;
            } else {
                wait = e.k - d[v] % e.k;
            }
            if (d[e.to] > d[v] + wait + e.t) {
                d[e.to] = d[v] + wait + e.t;
                q.emplace(d[e.to], e.to);
            }
        }
    }

    ll ans = d[Y];
    if (ans >= INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}