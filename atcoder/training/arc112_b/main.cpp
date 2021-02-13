#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll B, C;
    cin >> B >> C;

    ll L1 = B - C / 2;
    ll L2 = -B - (C - 1) / 2;
    ll R2 = -(B - (C - 1) / 2);
    ll R1 = B + (C - 2) / 2;

    // printf("%lld, %lld, %lld, %lld\n", L2, R2, L1, R1);

    if (R2 < L1) {
        ll ans = R1 - L1 + 1 + R2 - L2 + 1;
        cout << ans << endl;
    } else {
        ll ans = max(R1, R2) - min(L1, L2) + 1;
        cout << ans << endl;
    }

    return 0;
}