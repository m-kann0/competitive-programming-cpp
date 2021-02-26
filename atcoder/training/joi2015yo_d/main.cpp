#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    ll N, M;
    cin >> N >> M;
    ll D[N];
    rep(i, N) cin >> D[i];
    ll C[M];
    rep(i, M) cin >> C[i];

    const ll INF = 1'000'000'000'000'000'000;
    vector<vector<ll>> dp(M + 1, vector<ll>(N + 1, INF));
    rep(i, M + 1) {
        dp[i][0] = 0;
    }
    rep(i, M) {
        rep(j, N + 1) {
            chmin(dp[i + 1][j], dp[i][j]);
            if (j > 0) {
                chmin(dp[i + 1][j], dp[i][j - 1] + C[i] * D[j - 1]);
            }
        }
    }

    // for (auto vec : dp) {
    //     for (auto e : vec) {
    //         if (e >= INF) {
    //             printf("%10s", "INF");
    //         } else {
    //             printf("%10lld", e);
    //         }
    //     }
    //     printf("\n");
    // }

    ll ans = INF;
    rep(i, M + 1) {
        chmin(ans, dp[i][N]);
    }
    cout << ans << endl;

    return 0;
}