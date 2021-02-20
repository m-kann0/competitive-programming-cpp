#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

const ll INF = 1'000'000'000'000'000'005;

ll calc(string X, ll d, ll M) {
    ll res = 0;
    rep(i, X.size()) {
        res *= d;
        res += X[i] - '0';
        if (res > M) {
            return INF;
        }
    }
    return res;
}

vector<ll> calc2(ll M, ll d) {
    vector<ll> res;
    while (M > 0) {
        res.push_back(M % d);
        M /= d;
    }
    reverse(res.begin(), res.end());
    return res;
}

bool larger_than(vector<ll> X, vector<ll> Y) {
    if (X.size() > Y.size()) {
        return true;
    }
    if (X.size() < Y.size()) {
        return false;
    }
    rep(i, X.size()) {
        if (X[i] == Y[i]) {
            continue;
        }
        if (X[i] > Y[i]) {
            return true;
        }
        if (X[i] < Y[i]) {
            return false;
        }
    }
    return false;
}

int main() {
    string X;
    ll M;
    cin >> X >> M;

    ll d = 0;
    rep(i, X.size()) {
        d = max((int) d, X[i] - '0');
    }

    vector<ll> X2;
    rep(i, X.size()) {
        X2.push_back(X[i] - '0');
    }

    const ll INF = 1'000'000'000'000'000'000;
    ll ok = d;
    ll ng = INF;
    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;
        if (!larger_than(X2, calc2(M, mid))) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    ll ans = ok - d;

    // ll ans = 0;
    // while (true) {
    //     vector<ll> now = calc2(M, d);
    //     if (larger_than(X2, now)) {
    //         break;
    //     }
    //     ans++;
    //     d++;
    // }
    cout << ans << endl;

    return 0;
}