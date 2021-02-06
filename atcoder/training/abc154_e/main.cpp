#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string N;
    cin >> N;
    int K;
    cin >> K;

    int dp[N.length() + 1][2][K + 1];
    rep(i, N.length() + 1) rep(j, 2) rep(k, K + 1) dp[i][j][k] = 0;
    dp[0][0][0] = 1;

    rep(i, N.length()) {
        int D = N[i] - '0';
        rep(j, 2) {
            for (int k = 0; k <= K; k++) {
                int d_max;
                if (j == 1) {
                    d_max = 9;
                } else {
                    d_max = D;
                }
                for (int d = 0; d <= d_max; d++) {
                    int nj;
                    if (j == 1 || d < D) {
                        nj = 1;
                    } else {
                        nj = 0;
                    }
                    int nk;
                    if (d == 0) {
                        nk = k;
                    } else {
                        nk = k + 1;
                    }
                    if (nk <= K) {
                        dp[i + 1][nj][nk] += dp[i][j][k];
                    }
                }
            }
        }
    }

    int ans = dp[N.length()][0][K] + dp[N.length()][1][K];
    cout << ans << endl;

    return 0;
}
