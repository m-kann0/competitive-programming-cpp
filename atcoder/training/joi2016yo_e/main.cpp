#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

const ll INF = 1'000'000'000'000'000'000;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    ll N, M, K, S;
    cin >> N >> M >> K >> S;
    ll P, Q;
    cin >> P >> Q;
    ll C[K];
    rep(i, K) {
        cin >> C[i];
        C[i]--;
    }
    vector<vector<ll>> graph(N);
    rep(i, M) {
        ll A, B;
        cin >> A >> B;
        A--; B--;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }


    vector<bool> zomb(N, false);
    rep(i, K) {
        zomb[C[i]] = true;
    }

    vector<ll> d(N, INF);
    queue<ll> q;
    rep(i, K) {
        d[C[i]] = 0;
        q.push(C[i]);
    }
    while (!q.empty()) {
        ll u = q.front(); q.pop();
        for (ll v : graph[u]) {
            if (d[v] != INF) {
                continue;
            }
            d[v] = d[u] + 1;
            q.push(v);
        }
    }

    vector<bool> danger(N, false);
    rep(i, N) {
        if (d[i] <= S) {
            danger[i] = true;
        }
    }

    vector<ll> cost(N, INF);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    cost[0] = 0;
    pq.emplace(0, 0);
    while (!pq.empty()) {
        pair<ll, ll> p = pq.top(); pq.pop();
        ll u = p.second;
        if (cost[u] < p.first) {
            continue;
        }
        for (ll v : graph[u]) {
            if (zomb[v]) {
                continue;
            }
            ll c;
            if (v == N - 1) {
                c = 0;
            } else if (danger[v]) {
                c = Q;
            } else {
                c = P;
            }
            bool updated = chmin(cost[v], cost[u] + c);
            if (updated) {
                pq.emplace(cost[v], v);
            }
        }
    }
    cout << cost[N - 1] << endl;

    return 0;
}