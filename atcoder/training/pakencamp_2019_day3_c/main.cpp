#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    rep(i, n) {
        rep(j, m) {
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for (int t1 = 0; t1 < m; t1++) {
        for (int t2 = 0; t2 < m; t2++) {
            if (t1 == t2) {
                continue;
            }
            ll now = 0;
            rep(i, n) {
                now += max(a[i][t1], a[i][t2]);
            }
            ans = max(ans, now);
        }
    }
    cout << ans << endl;

    return 0;
}
