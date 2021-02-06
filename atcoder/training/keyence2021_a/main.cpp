#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

ll a[200005], b[200005], am[200005];

int main() {
    int n;
    cin >> n;
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    am[0] = a[0];
    for (int i = 1; i < n; i++) {
        am[i] = max(a[i], am[i - 1]);
    }

    ll c = 0;
    rep(i, n) {
        if (b[i] * am[i] > c) {
            c = b[i] * am[i];
        }
        cout << c << endl;
    }

    return 0;
}
