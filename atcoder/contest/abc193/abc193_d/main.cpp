#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

using ll = long long;
using P = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < ((ll) n); i++)
#define sizeof(x) ((ll) x.size())

int main() {
    ll K;
    cin >> K;
    string S, T;
    cin >> S >> T;

    vector<int> taka(10, 0), aoki(10, 0);
    rep(i, 4) {
        taka[S[i] - '0']++;
        aoki[T[i] - '0']++;
    }

    vector<ll> counts(10, K);
    rep(i, 4) {
        counts[S[i] - '0']--;
        counts[T[i] - '0']--;
    }

    auto point = [](vector<int> & v) {
        ll res = 0;
        for (ll i = 1; i <= 9; i++) {
            ll now = 1;
            rep(j, v[i]) {
                now *= 10;
            }
            res += i * now;
        }
        return res;
    };

    ll all = (9 * K - 8) * (9 * K - 9);
    ll win = 0;
    for (int i = 1; i <= 9; i++) {
        if (counts[i] == 0) {
            continue;
        }
        vector<int> a = taka;
        a[i]++;
        ll pa = point(a);
        for (int j = 1; j <= 9; j++) {
            if (counts[j] == 0 || (i == j && counts[j] <= 1)) {
                continue;
            }
            vector<int> b = aoki;
            b[j]++;
            ll pb = point(b);
            if (pa > pb) {
                // printf("i=%d, j=%d, pa=%lld, pb=%lld\n", i, j, pa, pb);
                if (i != j) {
                    // printf("counts[i]=%lld, counts[j]=%lld\n", counts[i], counts[j]);
                    win += counts[i] * counts[j];
                } else {
                    // printf("counts[i]=%lld, counts[j] - 1=%lld\n", counts[i], counts[i] - 1);
                    win += counts[i] * (counts[i] - 1);
                }
            }
        }
    }
    // printf("win=%lld, all=%lld\n", win, all);

    double ans = ((double) win) / ((double) all);
    printf("%.10f\n", ans);

    return 0;
}