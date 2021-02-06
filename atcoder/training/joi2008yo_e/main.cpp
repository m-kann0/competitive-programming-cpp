#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int r, c;
    cin >> r >> c;
    int a[r][c];
    rep(i, r) rep(j, c) cin >> a[i][j];

    int ans = 0;
    for (int bit = 0; bit < (1 << r); bit++) {
        int now = 0;
        rep(i, c) {
            int count = 0;
            rep(j, r) {
                if (bit & (1 << j)) {
                    if (a[j][i]) {
                        count++;
                    }
                } else {
                    if (!a[j][i]) {
                        count++;
                    }
                }
            }
            now += max(count, r - count);
        }
        ans = max(ans, now);
    }
    cout << ans << endl;

    return 0;
}
