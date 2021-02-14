#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)

int main() {
    ll A;
    cin >> A;
    ll ans = 0;
    for (ll x = 0; x <= A; x++) {
        ll y = A - x;
        ans = max(ans, x * y);
    }
    cout << ans << endl;

    return 0;
}