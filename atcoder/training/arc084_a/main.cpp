#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    ll ans = 0;
    rep(i, n) {
        ll count_a;
        {
            int ok = -1;
            int ng = n;
            while (abs(ok - ng) > 1) {
                int mid = (ok + ng) / 2;
                if (a[mid] < b[i]) {
                    ok = mid;
                } else {
                    ng = mid;
                }
            }
            count_a = ok + 1;
        }
        ll count_c;
        {
            int ok = n;
            int ng = -1;
            while (abs(ok - ng) > 1) {
                int mid = (ok + ng) / 2;
                if (c[mid] > b[i]) {
                    ok = mid;
                } else {
                    ng = mid;
                }
            }
            count_c = n - ok;
        }
        ans += count_a * count_c;
    }
    cout << ans << endl;

    return 0;
}
