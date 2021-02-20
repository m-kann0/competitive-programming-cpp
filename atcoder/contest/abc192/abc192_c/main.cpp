#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)

ll g1(ll x) {
    vector<ll> digits;
    while (x > 0) {
        digits.push_back(x % 10);
        x /= 10;
    }
    sort(digits.begin(), digits.end());
    reverse(digits.begin(), digits.end());
    ll res = 0;
    for (auto d : digits) {
        res *= 10;
        res += d;
    }
    // printf("g1=%lld\n", res);
    return res;
}

ll g2(ll x) {
    vector<ll> digits;
    while (x > 0) {
        digits.push_back(x % 10);
        x /= 10;
    }
    sort(digits.begin(), digits.end());
    ll res = 0;
    for (auto d : digits) {
        res *= 10;
        res += d;
    }
    // printf("g2=%lld\n", res);
    return res;
}

ll f(ll x) {
    return g1(x) - g2(x);
}

int main() {
    ll N, K;
    cin >> N >> K;

    ll ans = N;
    rep(i, K) {
        ans = f(ans);
        // cout << ans << endl;
    }
    cout << ans << endl;

    return 0;
}