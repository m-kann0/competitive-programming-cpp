#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)

int main() {
    string X;
    ll M;
    cin >> X >> M;

    if (X.size() == 1) {
        if (X[0] - '0' <= M) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
        return 0;
    }

    ll d = 0;
    rep(i, X.size()) {
        d = max((int) d, X[i] - '0');
    }

    auto is_ok = [&](ll n) {
        ll value = 0;
        rep(i, X.size()) {
            if (value > (M + n - 1) / n) {
                return false;
            }
            value *= n;
            value += X[i] - '0';
        }
        if (value > M) {
            return false;
        }
        return true;
    };

    ll ok = d;
    ll ng = M + 1;
    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;
        if (is_ok(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    cout << ok - d << endl;

    return 0;
}