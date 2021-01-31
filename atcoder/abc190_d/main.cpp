#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll s;
    cin >> s;

    ll ans = 0;
    for (ll n = 1; n * n < s * 2; n++) {
        if ((2 * s - n * n + n) % (2 * n) == 0) {
            ans += 2;
        }
    }
    cout << ans << endl;

    return 0;
}
