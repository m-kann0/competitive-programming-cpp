#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    rep(i, n) cin >> x[i] >> y[i];

    int ans = 0;
    rep(i, n) {
        rep(j, n) {
            if (i >= j) {
                continue;
            }
            int x_diff = abs(x[i] - x[j]);
            int y_diff = abs(y[i] - y[j]);
            if (x_diff >= y_diff) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
