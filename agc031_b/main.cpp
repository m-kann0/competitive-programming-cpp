#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

const int MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    int c[n];
    rep(i, n) cin >> c[i];

    int dp[n];
    int last[200005];
    rep(i, 200005) last[i] = -1;
    dp[0] = 1;
    last[c[0]] = 0;
    for (int i = 1; i < n; i++) {
        if (last[c[i]] == -1) {
            dp[i] = dp[i - 1];
        } else {
            int j = last[c[i]];
            if (j < i - 1) {
                dp[i] = dp[i - 1] + dp[j];
            } else {
                dp[i] = dp[i - 1];
            }
        }
        dp[i] %= MOD;
        last[c[i]] = i;
    }

    cout << dp[n - 1] << endl;

    return 0;
}
