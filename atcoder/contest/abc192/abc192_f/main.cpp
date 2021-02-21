#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}


int main() {
    ll N, X;
    cin >> N >> X;
    ll A[N];
    rep(i, N) cin >> A[i];

    const ll INF = 1'000'000'000'000'000'000;

    ll ans = INF;
    for (ll count = 1; count <= N; count++) {
        vector<vector<vector<ll>>> dp(N + 1, vector<vector<ll>>(count + 1, vector<ll>(count, -1)));
        dp[0][0][0] = 0;
        rep(i, N) {
            rep(j, count + 1) {
                rep(k, count) {
                    chmax(dp[i + 1][j][k], dp[i][j][k]);
                    if (dp[i][j][k] != -1 && j < count) {
                        chmax(dp[i + 1][j + 1][(k + A[i]) % count], dp[i][j][k] + A[i]);
                    }
                }
            }
        }
        ll sum = dp[N][count][X % count];
        if (sum == -1) {
            continue;
        }
        ll now = (X - sum) / count;
        chmin(ans, now);
    }
    cout << ans << endl;

    return 0;
}