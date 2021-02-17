#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

// ll solve(ll n, vector<ll> & w) {
//     vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, -n));
//     for (int i = 0; i <= n; i++) {
//         dp[i][i] = 0;
//         if (i < n) dp[i][i + 1] = 0;
//     }
//     for (ll bet = 2; bet <= n; bet++) {
//         for (ll i = 0; i + bet <= n; i++) {
//             ll j = i + bet;
//             if (dp[i + 1][j - 1] == j - i - 2) {
//                 if (abs(w[i] - w[j - 1]) <= 1) chmax(dp[i][j], j - i);
//                 else chmax(dp[i][j], j - i - 2);
//             }
//             for (ll k = i + 1; k <= j - 1; k++) {
//                 chmax(dp[i][j], dp[i][k] + dp[k][j]);
//             }
//         }
//     }
//     return dp[0][n];
// }

ll solve(ll n, vector<ll> & w) {
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    for (ll width = 2; width <= n; width++) {
        rep(left, n) {
            ll right = left + width - 1;
            if (right >= n) {
                break;
            }
            if (dp[left + 1][right - 1] == width - 2 && abs(w[left] - w[right]) <= 1) {
                chmax(dp[left][right], width);
            }
            for (ll k = left; k < right; k++) {
                chmax(dp[left][right], dp[left][k] + dp[k + 1][right]);
            }
        }
    }
    return dp[0][n - 1];
}

int main() {
    while (true) {
        ll n;
        cin >> n;
        if (n == 0) {
            break;
        }
        vector<ll> w(n);
        rep(i, n) {
            cin >> w[i];
        }
        ll ans = solve(n, w);
        cout << ans << endl;
    }

    return 0;
}