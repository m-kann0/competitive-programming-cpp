#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> s(m);
    rep(i, m) {
        int k;
        cin >> k;
        rep(j, k) {
            int si;
            cin >> si;
            si--;
            s[i].push_back(si);
        }
    }
    vector<int> p(m);
    rep(i, m) cin >> p[i];

    int ans = 0;
    for (int bit = 0; bit < (1<<n); bit++) {
        bool ok = true;
        rep(i, m) {
            int count = 0;
            for (auto si : s[i]) {
                if (bit & (1 << si)) {
                    count++;
                }
            }
            if (count % 2 != p[i]) {
                ok = false;
            }
        }
        if (ok) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
