#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];

    ll ans = 0;
    rep(i, n) {
        rep(j, n) {
            ans = max(ans, abs(a[i] - a[j]));
        }
    }

    cout << ans << endl;

    return 0;
}
