#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int t[n], a[n];
    rep(i, n) cin >> t[i] >> a[i];

    ll tc = t[0];
    ll ac = a[0];
    for (int i = 1; i < n; i++) {
        ll x = (tc + t[i] - 1) / t[i];
        ll y = (ac + a[i] - 1) / a[i];
        ll k = max(x, y);
        tc = t[i] * k;
        ac = a[i] * k;
    }

    cout << (tc + ac) << endl;

    return 0;
}
