#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll ans = 0;
    rep(i, 3) {
        ll s, e;
        cin >> s >> e;
        ans += s * e / 10;
    }
    cout << ans << endl;

    return 0;
}