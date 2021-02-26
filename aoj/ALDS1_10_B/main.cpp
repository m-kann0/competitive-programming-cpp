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
    ll n;
    cin >> n;
    ll r[n], c[n];
    rep(i, n) cin >> r[i] >> c[i];

    const ll INF = 1'000'000'000'000'000'000;
    vector<vector<ll>> dp(n, vector<ll>(n, INF));
    rep(i, n) dp[i][i] = 0;
    for (ll i = 1; i < n; i++) {
        rep(left, n) {
            ll right = left + i;
            if (right >= n) {
                continue;
            }
            for (ll j = left; j < right; j++) {
                chmin(dp[left][right], dp[left][j] + dp[j + 1][right] + r[left] * c[j] * c[right]);
            }
        }
    }
    // for (auto vec : dp) {
    //     for (auto v : vec) {
    //         if (v == INF) {
    //             printf("%10s", "INF");
    //         } else {
    //             printf("%10lld", v);
    //         }
    //     }
    //     printf("\n");
    // }
    cout << dp[0][n - 1] << endl;

    return 0;
}