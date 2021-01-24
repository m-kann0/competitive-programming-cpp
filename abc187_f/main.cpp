#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

string to_binary_string(int x) {
    string s;
    while (x > 0) {
        s += to_string((int) x % 2);
        x /= 2;
    }
    while (s.length() < 18) {
        s.push_back('0');
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int n, m;
    cin >> n >> m;
    int A[m];
    int B[m];
    vector<int> E(n);
    rep(i, m) {
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
        E[A[i]] |= (1 << B[i]);
        E[B[i]] |= (1 << A[i]);
    }

    vector<int> dp(1<<n, 10000);
    dp[0] = 0;
    rep(i, 1<<n) {
        rep(j, n) {
            if ((i & (1 << j)) == 0) {
                continue;
            }
            int target = i - (1 << j);
            if ((dp[target] <= 1) && ((target & E[j]) == target)) {
                dp[i] = 1;
            }
            break;
        }
    }

    for (int i = 1; i < (1 << n); i++) {
        for (int j = i; j > 0; j = (i & (j - 1))) {
            int k = i - j;
            dp[i] = min(dp[i], dp[j] + dp[k]);
        }
    }

    cout << dp[(1 << n) - 1] << endl;

    return 0;
}
