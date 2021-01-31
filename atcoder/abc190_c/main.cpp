#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    map<pair<int, int>, int> counts;
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        counts[make_pair(a, b)]++;
    }
    int k;
    cin >> k;
    int c[k], d[k];
    rep(i, k) {
        cin >> c[i] >> d[i];
        c[i]--; d[i]--;
    }

    int ans = 0;
    for (int bit = 0; bit < (1 << k); bit++) {
        vector<bool> placed(n, false);
        rep(i, k) {
            if (bit & (1 << i)) {
                placed[c[i]] = true;
            } else {
                placed[d[i]] = true;
            }
        }
        int now = 0;
        for (auto entry : counts) {
            if (placed[entry.first.first] && placed[entry.first.second]) {
                now += entry.second;
            }
        }
        ans = max(ans, now);
    }

    cout << ans << endl;

    return 0;
}
