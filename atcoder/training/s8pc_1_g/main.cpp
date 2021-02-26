#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll N, M;
    cin >> N >> M;
    const ll INF = 1'000'000'000'000'000'000;
    vector<vector<ll>> d(N, vector<ll>(N, INF));
    vector<vector<ll>> t(N, vector<ll>(N, 0));
    rep(i, M) {
        ll u, v, di, time;
        cin >> u >> v >> di >> time;
        u--; v--;
        d[u][v] = d[v][u] = di;
        t[u][v] = t[v][u] = time;
    }

    if (N == 1) {
        cout << "1 0" << endl;
        return 0;
    }

    vector<vector<P>> dp(1 << N, vector<P>(N, make_pair(INF, 0)));
    dp[0][0] = make_pair(0, 1);
    for (ll S = 0; S < (1 << N); S++) {
        rep(u, N) {
            rep(v, N) {
                if (d[u][v] == INF) {
                    continue;
                }
                if ((S & (1 << v)) > 0) {
                    continue;
                }
                if (dp[S][u].first + d[u][v] > t[u][v]) {
                    continue;
                }
                if (dp[S][u].first + d[u][v] < dp[S | (1 << v)][v].first) {
                    dp[S | (1 << v)][v] = make_pair(dp[S][u].first + d[u][v], dp[S][u].second);
                } else if (dp[S][u].first + d[u][v] == dp[S | (1 << v)][v].first) {
                    dp[S | (1 << v)][v].second += dp[S][u].second;
                }
            }
        }
    }

    P p = dp[(1 << N) - 1][0];
    if (p.first >= INF) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}