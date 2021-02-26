#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll N;
    cin >> N;
    vector<string> S(5);
    rep(i, 5) cin >> S[i];

    vector<vector<ll>> grid(5, vector<ll>(N, -1));
    rep(i, 5) {
        rep(j, N) {
            if (S[i][j] == 'R') {
                grid[i][j] = 0;
            } else if (S[i][j] == 'B') {
                grid[i][j] = 1;
            } else if (S[i][j] == 'W') {
                grid[i][j] = 2;
            } else {
                grid[i][j] = -1;
            }
        }
    }

    auto cost = [&](ll i, ll color) {
        ll res = 0;
        rep(j, 5) {
            if (grid[j][i] != color) {
                res++;
            }
        }
        return res;
    };

    auto chmin = [](auto& a, auto b) {
        if (a > b) {
            a = b;
            return true;
        }
        return false;
    };

    const ll INF = 1'000'000'000'000'000'000;
    vector<vector<ll>> dp(N, vector<ll>(3, INF));
    rep(c, 3) {
        dp[0][c] = cost(0, c);
    }
    for (ll i = 1; i < N; i++) {
        rep(j, 3) {
            rep(k, 3) {
                if (j == k) {
                    continue;
                }
                chmin(dp[i][j], dp[i - 1][k] + cost(i, j));
            }
        }
    }

    ll ans = INF;
    rep(i, 3) {
        chmin(ans, dp[N - 1][i]);
    }
    cout << ans << endl;

    return 0;
}