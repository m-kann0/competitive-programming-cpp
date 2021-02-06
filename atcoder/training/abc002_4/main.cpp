#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    set<pair<int, int>> s;
    rep(i, m) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        s.insert(make_pair(x, y));
    }

    int ans = 0;
    for (int bit = 0; bit < (1 << n); bit++) {
        vector<int> member;
        rep(i, n) {
            if (bit & (1 << i)) {
                member.push_back(i);
            }
        }
        bool ok = true;
        rep(i, member.size()) {
            rep(j, member.size()) {
                if (i >= j) {
                    continue;
                }
                if (!s.count(make_pair(member[i], member[j]))) {
                    ok = false;
                }
            }
        }
        if (ok) {
            ans = max(ans, (int) member.size());
        }
    }
    cout << ans << endl;

    return 0;
}
