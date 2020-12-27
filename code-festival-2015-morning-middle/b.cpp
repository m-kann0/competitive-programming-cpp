#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int dp[105][105];

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int ans = 100000;
    rep(i, n) {
        rep(j, 105) rep(k, 105) dp[j][k] = 0;
        int len_a = i;
        int len_b = n - i;
        rep(j, len_a) {
            rep(k, len_b) {
                if (s[j] == s[i + k]) {
                    dp[j + 1][k + 1] = dp[j][k] + 1;
                } else {
                    dp[j + 1][k + 1] = max(dp[j + 1][k], dp[j][k + 1]);
                }
            }
        }
        int now = len_a + len_b - 2 * dp[len_a][len_b];
        ans = min(ans, now);
    }
    cout << ans << endl;
    return 0;
}
