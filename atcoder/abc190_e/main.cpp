#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int k;
    cin >> k;
    int c[k];
    rep(i, k) {
        cin >> c[i];
        c[i]--;
    }

    const int INF = 1000000000;
    vector<vector<int>> dist(k, vector(k, INF));
    rep(i, k) {
        vector<int> d(n, INF);
        d[c[i]] = 0;
        queue<int> q;
        q.push(c[i]);
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (auto v : graph[u]) {
                if (d[v] == INF) {
                    d[v] = d[u] + 1;
                    q.push(v);
                }
            }
        }
        rep(j, k) {
            dist[i][j] = d[c[j]];
        }
    }

//    rep(i, k) {
//        rep(j, k) {
//            cout << dist[i][j] << " ";
//        }
//        cout << endl;
//    }

    vector<vector<int>> dp(1 << k, vector(k, INF));
    rep(i, k) {
        dp[1 << i][i] = 1;
    }
    for (int bit = 0; bit < (1 << k); bit++) {
        rep(i, k) {
            rep(j, k) {
//                printf("bit = %d, i = %d, j = %d\n", bit, i, j);
//                printf("bit & (1 << i) = %d\n", bit & (1 << i));
//                printf("bit & (1 << j) = %d\n", bit & (1 << j));
//                printf("(bit & (1 << i) > 0) && (bit & (1 << j) == 0) = %d\n", (bit & (1 << i) > 0) && (bit & (1 << j) == 0));
                if (((bit & (1 << i)) > 0) && ((bit & (1 << j)) == 0)) {
                    dp[bit | (1 << j)][j] = min(dp[bit | (1 << j)][j], dp[bit][i] + dist[i][j]);
                }
            }
        }
    }

//    rep(bit, 1 << k) {
//        rep(i, k) {
//            printf("dp[%d][%d] = %d\n", bit, i, dp[bit][i]);
//        }
//    }

    int ans = INF;
    rep(i, k) {
        ans = min(ans, dp[(1 << k) - 1][i]);
    }
    if (ans >= INF) {
        cout << "-1" << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
