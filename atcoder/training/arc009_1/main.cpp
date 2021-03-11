#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll N;
    cin >> N;
    ll total = 0;
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        total += a * b;
    }
    ll ans = total * 105 / 100;
    cout << ans << endl;

    return 0;
}