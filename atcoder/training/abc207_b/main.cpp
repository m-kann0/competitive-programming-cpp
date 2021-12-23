#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    // if (B >= C) {
    //     if ((A + B) > (C * D)) {
    //         cout << -1 << endl;
    //     } else {
    //         cout << 1 << endl;
    //     }
    //     return 0;
    // }

    // ll ans = (A + C * D - B - 1) / (C * D - B);
    // cout << ans << endl;

    if ((C * D - B) <= 0) {
        cout << -1 << endl;
        return 0;
    }
    ll ans = (A + C * D - B - 1) / (C * D - B);
    cout << ans << endl;

    return 0;
}