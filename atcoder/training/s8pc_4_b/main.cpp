#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 1000000000000;
    for (int bit = 0; bit < (1 << n); bit++) {
        int c = bitset<32>(bit).count();
        if (c != k) {
            continue;
        }
        ll now = 0;
        ll prev = 0;
        rep(i, n) {
            if (bit & (1 << i)) {
                if (a[i] <= prev) {
                    now += prev - a[i] + 1;
                    prev = prev + 1;
                }
            }
            prev = max(prev, a[i]);
        }
        ans = min(ans, now);
    }
    cout << ans << endl;

    return 0;
}
