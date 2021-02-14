#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int q;
    cin >> q;
    rep(_, q) {
        string X, Y;
        cin >> X >> Y;
        vector<vector<int>> dp(X.size() + 1, vector<int>(Y.size() + 1, 0));
        rep(i, X.size()) {
            rep(j, Y.size()) {
                if (X[i] == Y[j]) {
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                } else {
                    dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
                }
            }
        }
        cout << dp[X.size()][Y.size()] << endl;
    }

    return 0;
}