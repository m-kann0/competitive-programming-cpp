#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    int abc[3];
    cin >> abc[0] >> abc[1] >> abc[2];
    int l[n];
    rep(i, n) cin >> l[i];

    int ans = 1000000000;
    rep(bit, 1 << (2 * n)) {
        vector<vector<int>> ls(4);
        rep(i, n) {
            int t = ((bit >> (2 * i + 1)) & 1) * 2 + ((bit >> (2 * i)) & 1);
            ls[t].push_back(l[i]);
        }
        if (ls[0].empty() || ls[1].empty() || ls[2].empty()) {
            continue;
        }
        int now = 0;
        rep(i, 3) {
            now += (ls[i].size() - 1) * 10;
            int tot = 0;
            rep(j, ls[i].size()) {
                tot += ls[i][j];
            }
            now += abs(tot - abc[i]);
        }
        ans = min(ans, now);
    }

    cout << ans << endl;

    return 0;
}
