#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    ll V, E;
    cin >> V >> E;
    vector<vector<P>> graph(V);
    rep(i, E) {
        ll u, v, d;
        cin >> u >> v >> d;
        graph[u].emplace_back(v, d);
    }

    const ll INF = 1'000'000'000'000'000'000;
    vector<vector<ll>> dp(1 << V, vector<ll>(V, INF));
    dp[0][0] = 0; // 全ての頂点を巡回するので、始点はどれか1つでよい
    for (ll S = 0; S < (1 << V); S++) {
        rep(u, V) {
            // Sにuが含まれない場合、dp[S][u]はINFなので最小値は更新されない
            // 従ってこの判断は不要
            // if (S != 0 && (S | (1 << u)) == 0) continue;
            for (auto edge : graph[u]) {
                ll v = edge.first;
                ll d = edge.second;
                if ((S & (1 << v)) == 0) {
                    chmin(dp[S | (1 << v)][v], dp[S][u] + d);
                }
            }
        }
    }

    ll ans = dp[(1 << V) - 1][0];
    if (ans >= INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}