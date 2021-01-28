#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll h[n], s[n];
    rep(i, n) cin >> h[i] >> s[i];

    ll ok = 1000000000000000000;
    ll ng = 0;
    while (abs(ok - ng) > 1) {
        ll x = (ok + ng) / 2;
        bool can_do = true;
        vector<ll> limits(n);
        rep(i, n) {
            if (x < h[i]) {
                can_do = false;
            }
            limits[i] = (x - h[i]) / s[i];
        }
        sort(limits.begin(), limits.end());
        rep(i, n) {
            if (limits[i] < i) {
                can_do = false;
            }
        }
        if (can_do) {
            ok = x;
        } else {
            ng = x;
        }
    }

    cout << ok << endl;

    return 0;
}
