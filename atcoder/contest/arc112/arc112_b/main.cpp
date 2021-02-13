#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ll B, C;
    cin >> B >> C;

    ll ans = 0;
    ll N = C / 2;

    if (C == 1) {
        cout << 2 << endl;
        return 0;
    }

    if (B == 0) {
        ans = N + 1;
        if (C % 2 == 0) {
            ans += N - 1;
        } else {
            ans += N;
        }
    } else if (B < 0) {
        ll R = B;
        ll L = R - N;
        ll R2 = -B;
        ll L2 = R2 - (C - 1) / 2;
        ll R3 = -L;
        if (C % 2 == 0) {
            R3--;
        }
        if (L2 <= R) {
            ans = R3 - L + 1;
        } else {
            ans = R - L + 1;
            ans = R3 - L2 + 1;
        }
    } else {
        ll R = B;
        ll L = R - N;
        if (L > 0) {
            ll R2 = -L;
            ll L2 = -R - (C - 1) / 2;
            if (C % 2 == 0) {
                R2--;
            }
            ll R3 = -L2;
            if (C % 2 == 1) {
                R3--;
            }
            ans = R3 - L + 1;
            ans += R2 - L2 + 1;
        } else {
            ll L = -B - (C - 1) / 2;
            ans = abs(L) * 2 + 1;
            if (C % 2 == 1) {
                ans--;
            }
        }
    }
    cout << ans << endl;

    // if (B > 0) {
    //     ll E = B - N;
    //     if (E > 0) {
    //         ans += N + 1;
    //         if (C % 2 == 0) {
    //             ans += N;
    //         } else {
    //             ans += N + 1;
    //         }
    //         // ll BS = -B;
    //         N = (C - 1) / 2;
    //         ans += N;
    //     } else if (E == 0) {
    //         ans += 2 * N + 1;
    //         N = (C - 1) / 2;
    //         ans += N;
    //     } else {
    //         if (abs(E) <= abs(B)) {
    //             ans += 2 * B + 1;
    //             N = (C - 1) / 2;
    //             ans += N;
    //         } else {
    //             ll L1 = B;
    //             ll R1 = E;
    //             ll L2 = -B;
    //             ll R2 = -B - ((C - 1) / 2);
    //             printf("L1=%lld, R1=%lld, L2=%lld, R2=%lld\n", L1, R1, L2, R2);
    //             if (R1 <= L2) {
    //                 ans = L1 - R2 + 1;
    //             } else {
    //                 ans = (L1 - R1 + 1) + (L2 - R2 + 1);
    //             }
    //             // if (C % 2 == 0) {
    //             //     ans += abs(E) * 2;
    //             // } else {
    //             //     ans += abs(E) * 2 + 1;
    //             // }
    //         }
    //     }
    // } else if (B == 0) {
    //     if (C % 2 == 0) {
    //         ans = N + 1;
    //         ans += N - 1;
    //     } else {
    //         ans = N + 1;
    //         ans += N;
    //     }
    // } else {
    //     if (C % 2 == 0) {
    //         ans = N + 1;
    //         ans += N;
    //     } else {
    //         ans = (N + 1) * 2;
    //     }
    // }
    // cout << ans << endl;




    // ll N = C / 2;
    // if (B < 0) {
    //     if (C % 2 == 0) {
    //         ll ans = N + 1;
    //         ans += N;
    //         cout << ans << endl;
    //     } else {
    //         ll ans = (N + 1) * 2;
    //         cout << ans << endl;
    //     }
    // } else if (B == 0) {
    //     if (C % 2 == 0) {
    //         ll ans = N + 1;
    //         ans += N - 1;
    //         cout << ans << endl;
    //     } else {
    //         ll ans = N + 1;
    //         ans += N;
    //         cout << ans << endl;
    //     }
    // } else {
    //     if (C % 2 == 0) {
    //         ll E = B - N;
    //         ll ans;
    //         if (E > 0) {
    //             ans = N + 1;
    //             ans += N;
    //         } else if (E == 0) {
    //             ans = N + 1;
    //             ans += N;
    //         } else {
    //             ans = N + 1;
    //             ans += max(abs(B), abs(E)) - min(abs(B), abs(E));
    //             if (abs(E) > abs(B)) {
    //                 ans -= 1;
    //             }
    //         }
    //         cout << ans << endl;
    //     } else {
    //         ll E = B - N;
    //         ll ans;
    //         if (E > 0) {
    //             ans = N + 1;
    //             ans += N + 1;
    //         } else if (E == 0) {
    //             ans = N + 1;
    //             ans += N;
    //         } else {
    //             ans = N + 1;
    //             ans += max(abs(B), abs(E)) - min(abs(B), abs(E));
    //         }
    //         cout << ans << endl;
    //     }
    // }

    return 0;
}