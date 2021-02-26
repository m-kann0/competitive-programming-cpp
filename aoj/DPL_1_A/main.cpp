#include <bits/stdc++.h>
using namespace std;

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
    int n, m;
    cin >> n >> m;
    int c[m];
    rep(i, m) cin >> c[i];

    const int INF = 1'000'000'000;
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, INF));
    rep(i, m + 1) dp[i][0] = 0;
    rep(i, m) {
        rep(j, n + 1) {
            // dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            chmin(dp[i + 1][j], dp[i][j]);
            if (j >= c[i]) {
                // dp[i + 1][j] = min(dp[i + 1][j], dp[i + 1][j - c[i]] + 1);
                chmin(dp[i + 1][j], dp[i + 1][j - c[i]] + 1);
            }
        }
    }
    cout << dp[m][n] << endl;

    return 0;
}