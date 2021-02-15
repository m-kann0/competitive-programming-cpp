#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    while (true) {
        ll N, M;
        cin >> N >> M;
        if (N == 0 && M == 0) {
            break;
        }
        ll C[M];
        rep(i, M) cin >> C[i];
        ll x[N];
        rep(i, N) cin >> x[i];

        const ll INF = 1'000'000'000'000'000'000;
        vector<vector<ll>> dp(N + 1, vector<ll>(256, INF));
        dp[0][128] = 0;
        rep(i, N) {
            rep(j, 256) {
                for (auto c : C) {
                    ll y = j + c;
                    if (y < 0) {
                        y = 0;
                    }
                    if (y > 255) {
                        y = 255;
                    }
                    chmin(dp[i + 1][y], dp[i][j] + (y - x[i]) * (y - x[i]));
                }
            }
        }
        ll ans = INF;
        rep(i, 256) {
            chmin(ans, dp[N][i]);
        }
        cout << ans << endl;
    }

    return 0;
}