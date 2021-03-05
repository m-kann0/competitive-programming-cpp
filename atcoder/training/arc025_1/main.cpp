#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll D[7], J[7];
    rep(i, 7) cin >> D[i];
    rep(i, 7) cin >> J[i];

    ll ans = 0;
    rep(i, 7) ans += max(D[i], J[i]);
    cout << ans << endl;

    return 0;
}