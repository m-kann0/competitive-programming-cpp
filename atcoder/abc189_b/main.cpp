#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    ll x;
    cin >> n >> x;
    ll v[n], p[n];
    rep(i, n) {
        cin >> v[i] >> p[i];
    }

    x *= 100;

    ll total = 0;
    rep(i, n) {
        total += v[i] * p[i];
        if (total > x) {
            cout << (i + 1) << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
