#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int T;
    cin >> T;
    rep(i, T) {
        ll L, R;
        cin >> L >> R;
        // ll ans = 0;
        // for (ll A = L; A <= R; A++) {
        //     ll B = L;
        //     ll C = A - B;
        //     if (C < L || C > R) {
        //         continue;
        //     }
        //     // cout << A << " " << B << " " << C << endl;
        //     ans += C - B + 1;
        //     // cout << ans << endl;
        // }
        // cout << ans << endl;
        ll N = R - L * 2 + 1;
        if (N < 1) {
            cout << 0 << endl;
        } else {
            cout << N * (N + 1) / 2 << endl;
        }
    }

    return 0;
}