#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int D, N;
    cin >> D >> N;
    int T[D];
    rep(i, D) cin >> T[i];
    int A[N], B[N], C[N];
    rep(i, N) cin >> A[i] >> B[i] >> C[i];

    const int INF = 1'000'000'000;
    vector<vector<int>> dp(D, vector<int>(N, 0));
    rep(i, D) {
        if (i == 0) {
            continue;
        }
        rep(j, N) {
            if (!(A[j] <= T[i] && T[i] <= B[j])) {
                continue;
            }
            rep(k, N) {
                if (!(A[k] <= T[i - 1] && T[i - 1] <= B[k])) {
                    continue;
                }
                chmax(dp[i][j], dp[i - 1][k] + abs(C[k] - C[j]));
            }
        }
    }

    int ans = 0;
    rep(j, N) {
        if (dp[D - 1][j] >= INF) continue;
        chmax(ans, dp[D - 1][j]);
    }
    cout << ans << endl;

    return 0;
}