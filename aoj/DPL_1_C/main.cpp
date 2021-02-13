#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N, W;
    cin >> N >> W;
    int v[N], w[N];
    rep(i, N) cin >> v[i] >> w[i];

    vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
    rep(i, N) {
        rep(j, W + 1) {
            dp[i + 1][j] = dp[i][j];
            if (j >= w[i]) {
                dp[i + 1][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << dp[N][W] << endl;

    return 0;
}