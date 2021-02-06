#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    ll ans = 0;
    rep(i, n) {
        ans += b[i] - a[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    rep(i, n) {
        ans += abs(a[i] - a[n / 2]);
        ans += abs(b[i] - b[n / 2]);
    }

    cout << ans << endl;

    return 0;
}
