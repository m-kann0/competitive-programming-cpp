#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    int n = N - 1;
    int x[n];
    rep(i, n) cin >> x[i];
    int y;
    cin >> y;

    vector<vector<ll>> dp(n, vector<ll>(21, 0));
    rep(i, n) {
        if (i == 0) {
            dp[0][x[i]] = 1;
            continue;
        }
        rep(j, 21) {
            // if (j + x[i] <= 20) {
            //     dp[i][j + x[i]] += dp[i - 1][j];
            // }
            // if (j - x[i] >= 0) {
            //     dp[i][j - x[i]] += dp[i - 1][j];
            // }
            if (j - x[i] >= 0) {
                dp[i][j] += dp[i - 1][j - x[i]];
            }
            if (j + x[i] <= 20) {
                dp[i][j] += dp[i - 1][j + x[i]];
            }
        }
    }
    cout << dp[n - 1][y] << endl;

    return 0;
}