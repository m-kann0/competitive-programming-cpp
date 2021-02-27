#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    int T;
    cin >> T;
    rep(i, T) {
        ll X, Y, P, Q;
        cin >> X >> Y >> P >> Q;
        ll diff = -1;
        rep(a, 10000000) {
            ll aend = (2 * X + 2 * Y) * a + X + Y;
            // printf("aend=%lld\n", aend);
            ll b = (aend - P) / (P + Q);
            if (b <= 0) {
                continue;
            }
            ll bend = (P + Q) * b + P + Q;
            ll astart = aend - Y;
            if (bend <= astart) {
                if ((astart - bend) == diff) {
                    cout << "infinity" << endl;
                    break;
                }
                diff = astart - bend;
                continue;
            }
            ll bstart = bend - Q;
            // printf("astart=%lld,bstart=%lld\n", astart, bstart);
            cout << max(astart, bstart) << endl;
            break;
        }
    }

    return 0;
}