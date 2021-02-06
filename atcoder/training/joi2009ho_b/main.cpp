#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int d, n, m;
    cin >> d >> n >> m;
    vector<int> store(n - 1);
    rep(i, n - 1) cin >> store[i];
    int k[m];
    rep(i, m) cin >> k[i];

    store.push_back(0);
    sort(store.begin(), store.end());

    int ans = 0;
    rep(i, m) {
        int ok = 0;
        int ng = n;
        while (abs(ok - ng) > 1) {
            int mid = (ok + ng) / 2;
            if (store[mid] <= k[i]) {
                ok = mid;
            } else {
                ng = mid;
            }
        }
        //printf("ok = %d\n", ok);
        int now = abs(k[i] - store[ok]);
        now = min(now, abs(k[i] - store[(ok - 1 + n) % n]));
        now = min(now, abs(k[i] - store[(ok + 1) % n]));
        now = min(now, d - k[i]);
        ans += now;
        //printf("ans = %d\n", ans);
    }
    cout << ans << endl;

    return 0;
}
