#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    fenwick_tree<ll> fw(n);
    rep(i, n) {
        fw.add(a[i], 1);
        ans += fw.sum(a[i] + 1, n);
    }

    for (int i = 0; i < n; i++) {
        cout << ans << endl;
        ans += n - 2 * a[i] - 1;
    }

    return 0;
}
