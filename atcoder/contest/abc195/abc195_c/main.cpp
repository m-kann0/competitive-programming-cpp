#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    string N;
    cin >> N;

    ll A = 0;
    rep(i, sizeof(N)) {
        A *= 10;
        A += N[i] - '0';
    }

    ll ans = 0;
    ll x = 1;
    rep(i, sizeof(N)) {
        ll comma = i / 3;
        if (i + 1 == sizeof(N)) {
            ll f = N[0] - '0';
            f -= 1;
            ans += f * x * comma;
            ans += (A - (f + 1) * x + 1) * comma;
        } else {
            ans += (x * 10 - x) * comma;
        }
        x *= 10;
    }
    cout << ans << endl;

    return 0;
}