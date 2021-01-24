#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n) cin >> a[i];

    ll sum[n + 1];
    sum[0] = 0;
    rep(i, n) sum[i + 1] = sum[i] + a[i];

    vector<ll> candidates;
    rep(i, n) {
        rep(j, n) {
            if (i > j) {
                continue;
            }
            candidates.push_back(sum[j + 1] - sum[i]);
        }
    }

    ll ans = 0;
    for (int i = 40; i >= 0; i--) {
        vector<ll> now;
        for (auto c : candidates) {
            if ((c & (1ll << i)) > 0) {
                now.push_back(c);
            }
        }
        if (now.size() >= k) {
            ans += (1ll << i);
            candidates = now;
        }
    }

    cout << ans << endl;

    return 0;
}
