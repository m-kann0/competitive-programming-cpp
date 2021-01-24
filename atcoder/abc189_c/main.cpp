#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int ans = 0;
    rep(l, n) {
        int x = a[l];
        for (int r = l; r < n; r++) {
            x = min(x, a[r]);
            ans = max(ans, x * (r - l + 1));
        }
    }

    cout << ans << endl;

    return 0;
}
