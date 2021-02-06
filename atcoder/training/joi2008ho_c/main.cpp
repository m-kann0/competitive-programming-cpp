#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    ll m;
    cin >> n >> m;
    ll p[n + 1];
    rep(i, n) cin >> p[i];
    p[n] = 0;

    vector<ll> x;
    rep(i, n + 1) {
        rep(j, n + 1) {
            x.push_back(p[i] + p[j]);
        }
    }

    sort(x.begin(), x.end());

    ll ans = 0;
    for (auto xi : x) {
        if (xi > m) {
            continue;
        }
        int ok = 0;
        int ng = x.size();
        while (abs(ok - ng) > 1) {
            int mid = (ok + ng) / 2;
            if (x[mid] + xi <= m) {
                ok = mid;
            } else {
                ng = mid;
            }
        }
        ans = max(ans, xi + x[ok]);
    }

    cout << ans << endl;

    return 0;
}
